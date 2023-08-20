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
  struct pstat ps;

  if(argc < 1){
    printf(1, "No arguments!\n");
  }
  else
  {
    if(argc==1)
    {
      getprocinfo(&ps);
      
      printf(1,"PID\t|\tName\t|\tSize\n");
      len = ps.length;
      for(i=0;i<len;i++)
      {
        pid = ps.pid[i];
        strcpy(name,ps.name[i]);
        sz = ps.sz[i];
        printf(1,"%d\t|\t%s\t|\t%d\n",pid,name,sz);
      }
    }
    /*else(argc==2)
    {
        //verifica argv[1] è un intero -> atoi(argv[1])
        //chiamata ps(argv[1])
    }*/
  }

  exit();
  return 0;
}