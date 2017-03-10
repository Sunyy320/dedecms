<?php
$z[0]=Array("match","<li class=\"yanyuan\">主演：\r\n[内容]\r\n </li>",5,77);
$z[1]=Array("trim","<a([^>]*)>",82,126);
$z[1][4]['replace']="";
$z[2]=Array("trim","</a>",128,166);
$z[2][4]['replace']="";
$z[3]=Array("function","",171,202);

?>