<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
    <meta http-equiv="Content-Type" content="text/html; charset=<?php echo $GLOBALS['cfg_soft_lang']; ?>" />
    <title><?php echo $ainfos->Fields['title']; ?>影评</title>
    <link href="<?php echo $GLOBALS['cfg_templets_skin']; ?>/css/style.css" type="text/css"  rel="stylesheet"/>
    <link href="<?php echo $GLOBALS['cfg_templets_skin']; ?>/css/comment.css" type="text/css"  rel="stylesheet"/>
    <script language="javascript" src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/js/global.js"></script>
</head>
<body>
<div id="header">
    <div id="menu">
        <div class="top">
            <div class="logn">当前位置：<?php echo $ainfos->Fields['position']; ?> <a href="<?php echo $ainfos->Fields['arcurl']; ?>" target="_blank"><?php echo $ainfos->Fields['title']; ?></a> > 评论</div>
            <div class="txt">
                <ul>
                    <li>
                        <?php if($cfg_ml->M_ID){?>
                        <b><?php echo $cfg_ml->M_LoginID;?></b>,您好 欢迎来到评论页面 [<a href="" title="评论页面">评论页面</a>]  <a href="../member/index_do.php?fmdo=login&dopost=exit">退出</a>
                        <?php }else{ ?>
                        您好，请您先
                        <a href="../member/login.php">登陆</a>
                        或者 <a href="../member/reg_new.php">注册</a>
                        <?php }?>
                    </li>
                </ul>
            </div>
        </div>
    </div>
</div>
<div id="main">
    <div class="module">
        <div class="title">《<?php echo $ainfos->Fields['title']; ?>》的影评</div>
        <div class="comment_list">
            <div class="comment_fb">
                <div class="comment_fb_top"><span></span><b>为减轻审核压力，200字以内的评论不予审核。敬请谅解！</b>
                </div>
                <div class="comment_fb_u">
                    <form method='post' name='commentForm' action='?c=index&a=addpl' onsubmit="return comment.check(this);">
                        <input type="text" name="title" value="请输入标题" onfocus="if(this.value!='请输入标题'){this.style.color='#333'}else{this.value='';this.style.color='#333'}" onblur="if(this.value==''){this.value='请输入标题';this.style.color='#333'}" onkeydown="this.style.color='#333'" />
                        <input type='hidden' value='<?=$aid?>' name='movieid' />
                        <input type='hidden' value='<?php echo $cfg_ml->M_ID;?>' name='userid' />
                        <textarea id="top_content" name="content"></textarea>
                        <p><span><b><a href="#" target="_blank">登录</a></b> （请登录发表评论，游客不开放）</span> <button name="submitbutton" type="submit" style="border:none"></button></p>
                    </form>
                </div>
            </div>



            <div class="comment_m">
                <!--显示总评论数和分页信息-->
                <div class="comment_m_top">《<?php echo $ainfos->Fields['title']; ?>》共有<?php echo $dlist->totalResult; ?>条评论
                    <div class="pages">
                        <div><span> <?php
$atts = array();
$atts['tagname'] = 'pagelist';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>
</span></div>
                    </div>
                </div>

                <!--评论循环开始-->
                <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>
                <ul>
                    <li class="pic"><a href="#" target="_blank"><img alt="听你唱的幸福的头像" src="<?php echo $fields['face']; ?>" /></a></li>
                    <li class="txt">
                        <p><a href="#" target="_blank"><?php echo $fields['title']; ?></a><span><a href="#" target="_blank"><?php echo $fields['uname']; ?></a> <img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/1.jpg" /></span></p>
                        <p style="padding-top:10px;line-height:22px;"><?php echo $fields['content']; ?><a href="#" target="_blank">（查看全文）</a></p>
                    </li>
                 </ul>
                <?php
}
}?>
            </div>



        </div>
        <div class="ziliao">
            <div class="pingfen">
                <img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_1.gif" border="0" /><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_2.gif" border="0" />
                <img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_1.gif" border="0" /><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_2.gif" border="0" />
                <img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_1.gif" border="0" /><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_2.gif" border="0" />
                <img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_1.gif" border="0" /><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_2.gif" border="0" />
                <img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_1.gif" border="0" /><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_2.gif" border="0" />
                <img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_1.gif" border="0" /><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_2.gif" border="0" />
                <img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_1.gif" border="0" /><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_2.gif" border="0" />
                <img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_1.gif" border="0" /><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_2.gif" border="0" />
                <img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_1.gif" border="0" /><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_4.gif" border="0" />
                <img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_3.gif" border="0" /><img src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/rank_4.gif" border="0" />
                <p><?php echo $ainfos->Fields['pingfen'];?>分<span>（8604人评价）</span></P>
            </div>
            <div class="zl_info">
                <li class="pic"><a href="#" target="_blank"><img alt="<?php echo $ainfos->Fields['title']; ?>" src="<?php echo $ainfos->Fields['litpic']; ?>" /></a>
                    <div class="down"><a href="#" target="_blank">点击下载</a></div>
                </li>
                <li class="wz"><a href="#" target="_blank"><b><?php echo $ainfos->Fields['title']; ?></b></a></li>
                <li class="ss">年代：<a href="#" target="_blank"><?php echo $ainfos->Fields['time']; ?></a></li>
                <li class="ss">地区：<a href="#" target="_blank"><?php echo $ainfos->Fields['area']; ?></a></li>
                <li class="ss">语言：<?php echo $ainfos->Fields['yuyan']; ?></li>
                <li class="ss">格式：3GP MP4</li>
                <li class="ss">导演：<a href="#" target="_blank"><?php echo $ainfos->Fields['daoyan']; ?></a></li>
                <li class="ss">主演：<a href="#" target="_blank"><?php echo $ainfos->Fields['yanyuan']; ?></a></li>
            </div>
            <div class="jieshao">
                <?php echo $ainfos->Fields['introduction']; ?>
            </div>
        </div>
    </div>
</div>
<div id="bottom">
    <div class="bottom_so">
        <div class="bottom_so_wrap">
            <div class="bottom_searcher_tet">
                <form action="http://so.a67.com/so" method="get" name="q" target="_blank" id="search" >
                    <input type="text" name="q" class="bottom_focus" value="" />
                    <input type="image" name="s" class="bottom_searchbutton" id="button" src="<?php echo $GLOBALS['cfg_templets_skin']; ?>/images/botto_searcher.gif" align="absmiddle" />
                </form>
            </div>
            <div class="bottom_keywords">
                <a href="http://so.a67.com/so?q=%E5%91%A8%E6%98%9F%E9%A9%B0&t=movie" target="_blank">周星驰</a>
                <a href="http://so.a67.com/so?q=%E5%98%BB%E6%B8%B8%E8%AE%B0&t=movie" target="_blank">嘻游记</a>
                <a href="http://so.a67.com/so?q=%E5%94%90%E5%B1%B1%E5%A4%A7%E5%9C%B0%E9%9C%87&t=movie" target="_blank">唐山大地震</a>
                <a href="http://so.a67.com/so?q=%E6%95%A2%E6%AD%BB%E9%98%9F&t=movie" target="_blank">敢死队</a> |
                <a href="http://www.a67.com/zuixin/" target="_blank">最新电影</a>
                <a href="http://www.a67.com/paihang/" target="_blank">电影排行榜</a>
            </div>
        </div>
    </div>
    <div class="copyright">
        <p>Copyright © 2010 <a href="http://www.a67.com/">A67.COM</a> <a href="http://www.a67.com/">遛机网</a> All Rights Reserved  鲁ICP备05010054号</p>
        <p>本站所有手机资源均为会员制作上传，本站仅提供存储空间，如侵犯到您的权益，请及时联系本站删除，本站不负任何法律责任！</p>
    </div>
</div>
</body>
</html>