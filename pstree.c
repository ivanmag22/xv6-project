#include "types.h"
#include "stat.h"
#include "user.h"
#include "param.h"
#include "processInfo.h"

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
    gettree(&pf);
    if(argc==1)
    {
      printf(1,"PID\t|\tName\t|\tParent PID\n");
      len = pf.length;
      for(i=0;i<len;i++)
      {
        pid = pf.pid;
        strcpy(name,pf.name);
        sz = pf.parent;
        printf(1,"%d\t|\t%s\t|\t%d\n",pid,name,sz);
      }
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