<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><div class="nav">
    <ul>
    <li><a href="<?php echo $GLOBALS['cfg_cmspath']; ?>/" target="_self">首页</a></li>
    <?php
$atts = array();
$atts['tagname'] = 'channel';
$atts['type'] = 'top';
$atts['row'] = '8';
$blockValue = MakePublicTag($atts,$this->refObj,$fields); 
if(is_array($blockValue) && count($blockValue) > 0){
foreach( $blockValue as $key=>$fields )
{
?>
    <li><a href="[field:typelink/]" title="手机电影" target="_self">[field:typename/]</a></li>
    <?php
}
}
?>
</ul>
    <div class="morelink"><a href="http://www.a67.com/3gpcoder/" title="3GP格式转换器" target="_blank">3GP转换器</a> | <a href="http://www.2366.com/" target="_blank">网页游戏</a> | <a href="http://db.2u.com.cn/" target="_blank">游戏下载</a></div>
    <div class="ico_new"></div>
</div>