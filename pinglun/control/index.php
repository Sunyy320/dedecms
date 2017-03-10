<?php
  //控制器
  class index extends Control{

      function ac_index(){

          //获得得到的参数
          $c=request("c");
          $a=request("a");
          $aid=request('aid');
          //file_put_contents("d:/mylog.log",$aid);


          //获得文档信息，分页显示
          require_once(DEDEINC."/datalistcp.class.php");
          $dlist=new plDataListCp();

          // 在页面跳转的过程中把数据传递出去
          $dlist->SetParameter('c',$c);
          $dlist->SetParameter('a',$a);
          $dlist->SetParameter('aid',$aid);


          $sql="SELECT a.*,b.face,b.uname
FROM a67_pinglun a LEFT JOIN dede_member b
ON  a.userid=b.mid
WHERE a.videoid=$aid";

          $dlist->pageSize=2;
          //$dlist->pageNo=3;
          global $cfg_pinglun_dir;
          $templatefile = "./templates/default/showpl.htm";
          $dlist->SetTemplate($templatefile);
          $dlist->SetSource($sql);

          //这里我们通过 $aid 去获取该电影的信息.
          require_once(DEDEINC.'/arc.archives.class.php');

          //下面这个方法，默认只取出主表的内容.
          $ainfos=new Archives($aid);
          //下面这句是表示，把附件表的信息业加入懂啊 Fields属性中。
          $ainfos->ParAddTable();
          //加入arcurl
          $ainfos->MakeHtml();

          //设定变量值
          $GLOBALS['dlist']=$dlist;
          //$GLOBALS['res']=$res;
          $GLOBALS['ainfos']=$ainfos;

          $dlist->Display();

      }

      //增加评论
      function  ac_addpl(){
          $title=request("title");
          $content=request("content");
          $userid=request("userid");
          $videoid=request("movieid");
          $pltime=date("Y-m-d");

          $pl=$this->Model("pl");
          $res=$pl->insert_pl($title,$content,$userid,$videoid,$pltime);
          if($res){
             ShowMsg("添加评论成功",'-1',0,3000);
          }else{
              ShowMsg("添加评论失败",'-1',0,3000);
          }
      }

      //得到最新的5条评论
      function ac_getnewpl(){
          $aid=request("aid");
          //file_put_contents("d:/mylog.log",$aid."\r\n",FILE_APPEND);

          $pl=$this->Model("pl");
          $rows=$pl->get_new_pl($aid);

          global $cfg_templets_skin;//声明为全局变量


          $str="";
          foreach($rows as $row){
              $str.=
<<<HTMLSTR
    <ul><li class="pic"><a href="#" target="_blank"><img alt="听你唱的幸福的头像" src="{$row['face']}" /></a></li><li class="txt"><p><a href="#" target="_blank">{$row['title']}</a><span><a href="#" target="_blank">{$row['uname']}</a><img src="{$cfg_templets_skin}/images/1.jpg" /></span></p><p style="padding-top:10px;line-height:22px;">{$row['content']}</p></li></ul>
HTMLSTR;
          }
          //file_put_contents("d:/mylog.log","\r\n".$str."\r\n",FILE_APPEND);
          echo "$str";
      }


  }