#include "types.h"
#include "stat.h"
#include "user.h"
#include "param.h"
#include "processInfo.h"

void
printwalk(struct pfam *pf){
  int i;
  printf(1,"prova\n");
  if(pf->n_ch == 0)
  {
    printf(1,"%d\t|\t%s\t|\t%d\n",pf->pid,pf->name,pf->parent);

    return;
  }

  for(i=0;i<pf->n_ch;i++)
  {
    printf(1,"%d\t|\t%s\t|\t%d\n",pf->pid,pf->name,pf->parent);
    printwalk(pf->children[i]);
  }
}

int
main(int argc, char *argv[])
{
  int i,pid,sz,len;
  char name[16];
  struct pfam pf;

  if(argc < 1){
    printf(1, "No arguments!\n");
  }
  else
  {
    getproctree(&pf);
    if(argc==1)
    {
      printf(1,"PID\t|\tName\t|\tParent PID\n");
      printwalk(&pf);
      i=0;
      pid=0;
      sz=0;
      len=0;
      strcpy(name,"");
      printf(1,"%d\t|\t%s\t|\t%d\t%d\t%d\n",pid,name,sz,i,len);
      /*len = pf.length;
      for(i=0;i<len;i++)
      {
        pid = pf.pid;
        strcpy(name,pf.name);
        sz = pf.parent;
        printf(1,"%d\t|\t%s\t|\t%d\n",pid,name,sz);
      }*/
    }
    /*else if(argc==2)
    {
      pid = atoi(argv[1]);
      if(pid<1 || pid>NPROC)
      {
        printf(2,"Error: PID\n");
        exit();
      }
      
      for(i=0; i<ps.length;i++)
      {
        if(ps.pid[i] == pid)
        {
          printf(1,"PID\t|\tName\t|\tSize\n");
          strcpy(name,ps.name[i]);
          sz = ps.sz[i];
          printf(1,"%d\t|\t%s\t|\t%d\n",pid,name,sz);
          exit();
        }
      }
      printf(2,"Error: No Process for this PID\n");
    }*/
  }

  exit();
  return 0;
}