<?php
$z[0]=Array("match","<li class=\"yanyuan\">主演：\r\n[内容]\r\n</li></ul>",5,81);
$z[1]=Array("trim","<a([^>]*)>",86,130);
$z[1][4]['replace']="";
$z[2]=Array("trim","</a>",132,170);
$z[2][4]['replace']="";
$z[3]=Array("function","",175,206);

?>