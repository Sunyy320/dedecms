<?php
require_once(dirname(__FILE__)."/../include/common.inc.php");
require_once(DEDEINC."/datalistcp.class.php");

//取出dede_arctype中的typename，为栏目组
$sql2="select * from dede_arctype";
$dsql->SetQuery($sql2);
$dsql->Execute();
//循环取出->$types数组
$types=array();
while($row=$dsql->GetArray()){

    $types[]=$row;
}
//var_dump($types);
//die();


//取出电影和电视剧中各个内容的信息
$sql = "SELECT main.*, type.typename,addon.*
    FROM dede_archives main
    LEFT JOIN dede_arctype TYPE ON type.id = main.typeid
    LEFT JOIN dede_addonmovie addon ON addon.aid = main.id
   ";

$dlist = new myDataListCp();

//设置typeid
if(isset($typeid)&&!empty($typeid)){
    $sql.=" WHERE main.typeid=$typeid";
}
$dlist->SetParameter('typeid',$typeid);//设置在点击下一页上一页等分页导航条的时候可以把参数带过去


//设置地区
if(isset($area)&&!empty($area)){
    $sql.=" AND addon.area='$area'";//此处因为地点是varchar类型，所以要加上引号
}
$dlist->SetParameter('area',$area);//设置在点击下一页上一页等分页导航条的时候可以把参数带过去

//设置时间
if(isset($time)&&!empty($time)){
    $sql.=" AND addon.time=$time";
}
$dlist->SetParameter('time',$time);//设置在点击下一页上一页等分页导航条的时候可以把参数带过去


$dlist->pageSize = 5;//设置一页显示多少个内容
$template ='mysearch.htm';
$templatefile = DEDEROOT."/templets/default/$template";
$dlist->SetTemplate($templatefile);

$dlist->SetSource($sql);
//var_dump($dlist);
//die();

$dlist->Display();