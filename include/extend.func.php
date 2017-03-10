<?php
function litimgurls($imgid=0)
{
    global $lit_imglist,$dsql;
    //获取附加表
    $row = $dsql->GetOne("SELECT c.addtable FROM #@__archives AS a LEFT JOIN #@__channeltype AS c 
                                                            ON a.channel=c.id where a.id='$imgid'");
    $addtable = trim($row['addtable']);
    
    //获取图片附加表imgurls字段内容进行处理
    $row = $dsql->GetOne("Select imgurls From `$addtable` where aid='$imgid'");
    
    //调用inc_channel_unit.php中ChannelUnit类
    $ChannelUnit = new ChannelUnit(2,$imgid);
    
    //调用ChannelUnit类中GetlitImgLinks方法处理缩略图
    $lit_imglist = $ChannelUnit->GetlitImgLinks($row['imgurls']);
    
    //返回结果
    return $lit_imglist;
}

function down($str1){
//按照换行符分割字符串,window是以\n为换行符，\r\n是Linux
    $str1=str_replace("\r\n","\n",$str1);
    $arr1=	explode("\n",$str1);
   //var_dump($arr1);
    $arr3=array();
    foreach($arr1 as $key=>$value){
    //value=3PG|美人鱼1|3GP|176x144|http://img.a67.com/201207/18/201207181100254114.jpg
     $arr2=explode("|",$value);
     // $arr3[$arr2[0]][]=$arr2;
    $arr3[$arr2[0]][]=array(
                'title'=>$arr2[1],
                'fbl'=>$arr2[3],
                'address'=>$arr2[4]
            );
        }

    $res="";
    global $cfg_templets_skin;//声明为全局变量
    global $ac;//dede 提供了一个全局的 Archives 类对象实例，该对象实例可以取出
    foreach($arr3 as $key=>$value){
        $res.=
 <<<HTMLSTR
       <H2 id="downloadurls">{$ac->Fields['title']}{$key}下载地址<font class="f1">温馨提示：一键下载功能可一次下载{$key}格式所有分节电影！</font><span><a href="javascript:;" onclick="return d3gp()"><img src="{$cfg_templets_skin}/images/yijian_3gp.gif" border="0" /></a></span></H2>
HTMLSTR;

        $res.="<div class=\"downurls\"><ul>";
        foreach($value as $key2=>$value2){
              $res.=
<<<HTMLSTR
    <li><a href="http://www.a67.com/download/26059-0" title="{$value2['title']}{$key}下载" target="_blank" rel="nofollow">{$value2['title']}</a> (格式：{$key} / 分辨率：{$value2['fbl']})<span><a href="{$value2['address']}" target="_blank" rel="nofollow">迅雷高速下载</a></span><span><a href="{$value2['address']}" target="_blank" rel="nofollow">下载到电脑</a></span></li>
HTMLSTR;
        }
        $res.="</ul></div>";
    }

    return $res;

}