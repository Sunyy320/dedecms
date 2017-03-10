<?php
require_once(dirname(__file__).'/../include/common.inc.php');
require_once(DEDEINC.'/request.class.php');

require_once(DEDEINC."/memberlogin.class.php");
$cfg_ml =new MemberLogin();
//echo "<pre>";
//var_dump($cfg_ml);
//echo "</pre>";
//die();

//c是控制器，a是操作方法
$ct = Request('c', 'index');
$ac = Request('a', 'index');

// 统一应用程序入口
RunApp($ct, $ac);