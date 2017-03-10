<?php
$z[0]=Array("match","<li class=\"yanyuan\">主演：[内容] </li>",5,73);
$z[1]=Array("trim","<a([^>]*)>",78,122);
$z[1][4]['replace']="";
$z[2]=Array("trim","</a>",124,162);
$z[2][4]['replace']="";
$z[3]=Array("function","",167,198);

?>