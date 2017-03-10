{dede:sppage sptype='full' sptype='full' srul='1' erul='5'}{/dede:sppage}
{dede:previewurl}http://www.a67.com/movie/434945{/dede:previewurl}
{dede:keywordtrim}{/dede:keywordtrim}
{dede:descriptiontrim}{/dede:descriptiontrim}
{dede:item field='title' value='' isunit='' isdown=''}
   {dede:match}<h1 title="[内容]">{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='writer' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='source' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='pubdate' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}@me=GetMkTime(@me);{/dede:function}
{/dede:item}
{dede:item field='pingfen' value='0' isunit='' isdown=''}
   {dede:match}<font id="rank_fen">[内容]</font>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='daoyan' value='' isunit='' isdown=''}
   {dede:match}<li class="info_dy">导演：
[内容]</li>{/dede:match}
   {dede:trim replace=''}<a([^>]*)>{/dede:trim}
{dede:trim replace=''}</a>{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='yanyuan' value='' isunit='' isdown=''}
   {dede:match}<li class="yanyuan">主演：[内容] </li>{/dede:match}
   {dede:trim replace=''}<a([^>]*)>{/dede:trim}
{dede:trim replace=''}</a>{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='time' value='' isunit='' isdown=''}
   {dede:match}<li class="info_nd">年代：
[内容]
</li>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='yuyan' value='中文,英文,粤语,韩语' isunit='' isdown=''}
   {dede:match}<li class="info_nd">语言：
[内容]</li>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='area' value='大陆,欧美,港台,韩国' isunit='' isdown=''}
   {dede:match}<li class="info_dq">地区：
[内容]
</li>{/dede:match}
   {dede:trim replace=''}<a([^>]*)>{/dede:trim}
{dede:trim replace=''}</a>{/dede:trim}
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='introduction' value='' isunit='1' isdown='1'}
   {dede:match}<div class="cont">
[内容]
</div>{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
{dede:item field='download' value='' isunit='' isdown=''}
   {dede:match}{/dede:match}
   
   {dede:function}{/dede:function}
{/dede:item}
