<?php
$z[0]=Array("match","<li class=\"yanyuan\">主演：\r\n[内容]\r\n</li>\r\n</ul>",5,83);
$z[1]=Array("trim","<a([^>]*)>",88,132);
$z[1][4]['replace']="";
$z[2]=Array("trim","</a>",134,172);
$z[2][4]['replace']="";
$z[3]=Array("function","",177,208);

?>