#include "types.h"
#include "stat.h"
#include "user.h"
#include "param.h"
#include "processInfo.h"

int
main(int argc, char *argv[])
{
  if(argc < 1){
    printf(1, "No arguments!\n");
  }
  else
  {
    getproctree();
  }

  exit();
  return 0;
}