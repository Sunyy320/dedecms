<?php
require_once(dirname(__FILE__)."/../include/common.inc.php");
$type=$_GET['type'];
$pf=$_GET['pf'];
$aid=$_GET['aid'];
//file_put_contents('d:/mylog.log',$type);

if($type=='update') {
    //file_put_contents('d:/mylog.log','update');
    $sql = "SELECT pingfen FROM dede_addonmovie WHERE aid=$aid";
    $row = $dsql->GetOne($sql);
    if (is_array($row)) {
        //$new_pf = ($row['pingfen'] + $pf) / 2;
        $new_pf=$pf;
       // $new_pf=number_format($new_pf, 1);
        $sql2 = "UPDATE dede_addonmovie SET pingfen=$new_pf WHERE aid=$aid";
        if ($dsql->ExecNoneQuery($sql2)) {
            echo $new_pf;
        } else {
            echo '更新评分失败';
        }
    } else {
        echo '查询评分失败';
    }
}else if($type=="select"){
    //file_put_contents('d:/mylog.log','select1');

    $sql = "SELECT pingfen FROM dede_addonmovie WHERE aid=$aid";
    $row = $dsql->GetOne($sql);
    if (is_array($row)) {
        //file_put_contents('d:/mylog.log',$row['pingfen']);
        echo "document.write('".$row['pingfen']."');";
    }
}else if($type=='getstar'){
    $sql = "SELECT pingfen FROM dede_addonmovie WHERE aid=$aid";
    $row = $dsql->GetOne($sql);
    if (is_array($row)) {

        $pf=$row['pingfen'];
        $yellow=ceil($pf/2);

        $str="";
        global $cfg_templets_skin;
        for($i=1;$i<=$yellow;$i++){
            $str.="<img src=\"{$cfg_templets_skin}/images/star.jpg\" border=\"0\" />";
        }
        for($i=1;$i<=5-$yellow;$i++){
            $str.="<img src=\"{$cfg_templets_skin}/images/star_grid.jpg\" border=\"0\" />";
        }

     //  file_put_contents("d:/mylog.log",$str."\r\n",FILE_APPEND);
        echo "document.write('".$str."');\r\n";

    }else{
        die('动态获得小星星失败');
    }

}

