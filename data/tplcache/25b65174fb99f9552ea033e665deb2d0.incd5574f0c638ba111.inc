<?php
$z[0]=Array("match","<li class=\"yanyuan\">主演：\r\n[内容]</a> </li>",5,79);
$z[1]=Array("trim","<a([^>]*)>",84,128);
$z[1][4]['replace']="";
$z[2]=Array("trim","</a>",130,168);
$z[2][4]['replace']="";
$z[3]=Array("function","",173,204);

?>