<?php
require_once(dirname(__FILE__)."/../include/common.inc.php");


$str1="3PG|美人鱼1|3GP|176x144|http://img.a67.com/201207/18/201207181100254114.jpg
3PG|美人鱼2|3GP|176x144|http://img.a67.com/201207/18/201207181100254114.jpg
3PG|美人鱼3|3GP|176x144|http://img.a67.com/201207/18/201207181100254114.jpg
4PG|美人鱼1|4GP|320x240|http://img.a67.com/201207/18/201207181100254114.jpg
4PG|美人鱼2|4GP|320x240|http://img.a67.com/201207/18/201207181100254114.jpg";


//按照换行符分割字符串,window是以\n为换行符，\r\n是Linux
$str1=str_replace("\r\n","\n",$str1);
$arr1=	explode("\n",$str1);
//var_dump($arr1);
$arr3=array();
foreach($arr1 as $key=>$value){
//     value=3PG|美人鱼1|3GP|176x144|http://img.a67.com/201207/18/201207181100254114.jpg
    $arr2=explode("|",$value);
//    $arr3[$arr2[0]][]=$arr2;
      $arr3[$arr2[0]][]=array(
          'title'=>$arr2[1],
          'fbl'=>$arr2[3],
          'address'=>$arr2[4]
      );
}
var_dump($arr3);
