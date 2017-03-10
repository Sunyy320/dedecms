<?php
     class pl extends Model{

         //从数据库中得到评论
         function  get_pl($aid){
             $sql="SELECT * FROM a67_pinglun";
             $this->dsql->SetQuery($sql);
             $this->dsql->Execute();
             $rows = array();
             while($row = $this->dsql->GetArray())
             {
                 $rows[] = $row;
             }
             return $rows;
         }

         //评论插入到数据库中
         function  insert_pl($title,$content,$userid,$videoid,$pltime){
            $sql="INSERT INTO a67_pinglun(userid,title,content,pltime,videoid) VALUES($userid,'$title','$content','$pltime',$videoid)";
             file_put_contents("d:/mylog.log",$sql,FILE_APPEND);
             if($this->dsql->ExecuteNoneQuery($sql)) return TRUE;
             else return FALSE;
         }

         //得到最新的评论
         function  get_new_pl($aid){

             $sql=" SELECT a.*,b.face,b.uname
FROM a67_pinglun a LEFT JOIN dede_member b
ON  a.userid=b.mid
WHERE a.videoid=$aid ORDER BY pltime DESC LIMIT 5";
             $this->dsql->SetQuery($sql);
             $this->dsql->Execute();
             $rows = array();
             while($row = $this->dsql->GetArray())
             {
                 $rows[] = $row;
             }
             return $rows;
         }
     }