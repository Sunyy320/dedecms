<?php
$z[0]=Array("match","<li class=\"yanyuan\">主演：\r\n[内容]</li>",5,74);
$z[1]=Array("trim","<a([^>]*)>",79,123);
$z[1][4]['replace']="";
$z[2]=Array("trim","</a>",125,163);
$z[2][4]['replace']="";
$z[3]=Array("function","",168,199);

?>