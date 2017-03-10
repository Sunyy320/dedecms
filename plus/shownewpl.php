<?php
require_once(dirname(__FILE__)."/../include/common.inc.php");
$aid=$_GET['aid'];

$sql="SELECT a.*,b.face,b.uname
FROM a67_pinglun a LEFT JOIN dede_member b
ON  a.userid=b.mid
WHERE a.videoid=$aid";

$str = "";

$dsql->SetQuery($sql);
$dsql->Execute();
global $cfg_templets_skin;//声明为全局变量
//循环取出
while($row=$dsql->GetArray()){
    $str.=
<<<HTMLSTR
	<ul><li class="pic"><a href="#" target="_blank"><img alt="听你唱的幸福的头像" src="{$row['face']}" /></a></li><li class="txt"><p><a href="#" target="_blank">{$row['title']}</a><span><a href="#" target="_blank">{$row['uname']}</a><img src="{$cfg_templets_skin}/images/1.jpg" /></span></p><p style="padding-top:10px;line-height:22px;">{$row['content']}</p></li></ul>
HTMLSTR;

  //file_put_contents("d:/mylog.log","\r\n".$str."\r\n",FILE_APPEND);
}
echo "document.write('".$str."');\r\n";
/*
 * <ul>
        <li class="pic">
           <a href="#" target="_blank">
           <img alt="听你唱的幸福的头像" src="{$row['face']}" />
         </a></li>
        <li class="txt">
            <p><a href="#" target="_blank">{$row['title']}</a>
            <span><a href="#" target="_blank">{$row['uname']}</a>
                  <img src="{$cfg_templets_skin}/images/1.jpg" />
            </span></p>
            <p style="padding-top:10px;line-height:22px;">{$row['content']}</p>
        </li>
	</ul>
 * */