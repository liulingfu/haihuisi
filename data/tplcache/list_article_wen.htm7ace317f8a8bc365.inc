<?php
$z[0]=Array("field","",255,278);
$z[0][4]['name']="seotitle";
$z[1]=Array("field","",324,382);
$z[1][4]['name']="description";
$z[1][4]['function']="html2text(@me)";
$z[2]=Array("field","",421,450);
$z[2][4]['name']="keywords";
$z[3]=Array("global","",469,501);
$z[3][4]['name']="cfg_templets_skin";
$z[4]=Array("global","",568,600);
$z[4][4]['name']="cfg_templets_skin";
$z[5]=Array("include","",706,743);
$z[5][4]['filename']="header.htm";
$z[6]=Array("field","\r\n        if(@me==19)\r\n            @me='<img src=\"/templets/default/images/tid_19.jpg\" width=\"100%\" />';\r\n        else\r\n            @me='<img src=\"/templets/default/images/tid_28.jpg\" width=\"100%\" />';\r\n        ",827,1090);
$z[6][4]['name']="typeid";
$z[6][4]['runphp']="yes";
$z[7]=Array("include","",1126,1161);
$z[7][4]['filename']="left.htm";
$z[8]=Array("field","",1224,1283);
$z[8][4]['name']="typename";
$z[8][4]['function']="GetTypeName£¨@me£©";
$z[9]=Array("list","            \r\n    <li><span style=\"float:right\">[field:pubdate function=\"GetDateTimeMK(@me)\"/]</span><a href=\"/plus/view.php?aid=[field:id/]\">[field:title/]</a></li>\r\n",1327,1531);
$z[9][4]['pagesize']="20";
$z[10]=Array("pagelist","",1650,1716);
$z[10][4]['listitem']="index,end,pre,next,pageno";
$z[10][4]['listsize']="5";
$z[11]=Array("include","",1788,1825);
$z[11][4]['filename']="footer.htm";

?>