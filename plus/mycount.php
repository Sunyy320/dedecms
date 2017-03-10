<?php
//dirname()根目录D:\wamp\www\dedecms\plus
//__FILE__文件完整路径和文件名D:\wamp\www\dedecms\plus\mycount.php
require_once(dirname(__FILE__)."/../include/common.inc.php");

//获取变量的整值
$aid=intval($_GET['aid']);

$sql="UPDATE dede_archives SET click=click+1 WHERE id=$aid";

if(!$dsql->ExecNoneQuery($sql)){
    file_put_contents('d:/mylog.log','失败');
    die('点击量失败');
}

$sql2="SELECT click FROM dede_archives WHERE id=$aid";
$row=$dsql->GetOne($sql2);

if(is_array($row)){
    echo  "document.write('".$row['click']."');\r\n";
}

