<?php
$z[0]=Array("match","<li class=\"info_dq\">地区：\r\n[内容]\r\n</li",5,75);
$z[1]=Array("trim","<a([^>]*)>",80,124);
$z[1][4]['replace']="";
$z[2]=Array("trim","</a>",126,164);
$z[2][4]['replace']="";
$z[3]=Array("function","",169,200);

?>