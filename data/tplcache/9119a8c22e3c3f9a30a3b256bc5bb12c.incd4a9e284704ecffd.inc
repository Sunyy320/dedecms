<?php
$z[0]=Array("match","</li><li class=\"yanyuan\">主演：\r\n[内容]\r\n</li></ul>",5,86);
$z[1]=Array("trim","<a([^>]*)>",91,135);
$z[1][4]['replace']="";
$z[2]=Array("trim","</a>",137,175);
$z[2][4]['replace']="";
$z[3]=Array("function","",180,211);

?>