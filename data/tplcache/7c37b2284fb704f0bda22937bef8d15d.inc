{dede:noteinfo notename="电影" channelid="18" macthtype="string"
    refurl="http://www.a67.com/movie/434950" sourcelang="utf-8" cosort="asc"
  isref="no" exptime="10" usemore="0" /}
{dede:listrule sourcetype="batch" rssurl="http://" regxurl="http://www.a67.com/movie/p.(*)"
startid="2" endid="3" addv="1" urlrule="area" musthas=""
 nothas="" listpic="1" usemore="0"}
    {dede:addurls}{/dede:addurls}
    {dede:batchrule}{/dede:batchrule}
    {dede:regxrule}{/dede:regxrule}
    {dede:areastart}<div class="list_p">
{/dede:areastart}
    {dede:areaend}</div>
<div class="pages">{/dede:areaend}
{/dede:listrule}
{dede:sppage sptype='full' srul='1' erul='5'}{/dede:sppage}
{dede:previewurl}http://www.a67.com/movie/434950{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<title>[内容]</title>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='writer' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='source' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='pubdate' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='time' value='' isunit='' isdown=''}
   {dede:match}<li class="info_nd">年代：
[内容]
</li>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='daoyan' value='' isunit='' isdown=''}
   {dede:match}<li class="info_dy">导演：
[内容]
</li>{/dede:match}
   {dede:trim replace=""}<a([^>]*)>{/dede:trim}
{dede:trim replace=""}</a>{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='yanyuan' value='' isunit='' isdown=''}
   {dede:match}<li class="yanyuan">主演：
[内容]
</li>{/dede:match}
   {dede:trim replace=""}<a([^>]*)>{/dede:trim}
{dede:trim replace=""}</a>{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='pingfen' value='0' isunit='' isdown=''}
   {dede:match}<font id="rank_fen">[内容]</font>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='introduction' value='' isunit='1' isdown='1'}
   {dede:match}<div class="cont">
 [内容]
</div>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='download' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='yuyan' value='粤语,国语,英语,韩语,日语,其他' isunit='' isdown=''}
   {dede:match}<li class="info_nd">语言：
[内容]
</li>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}{dede:item field='area' value='大陆,韩国,日本,欧美,港台,其他' isunit='' isdown=''}
   {dede:match}<li class="info_dq">地区：
[内容]
</li>{/dede:match}
   {dede:trim replace=""}<a([^>]*)>{/dede:trim}
{dede:trim replace=""}</a>{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}