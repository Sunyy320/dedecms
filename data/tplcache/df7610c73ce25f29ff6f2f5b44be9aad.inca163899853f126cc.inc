<?php
$z[0]=Array("match","<li>演员：[内容]</li>",5,56);
$z[1]=Array("trim","<a([^>]*)>",61,105);
$z[1][4]['replace']="";
$z[2]=Array("trim","</a>",107,145);
$z[2][4]['replace']="";
$z[3]=Array("function","",150,181);

?>