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
    if(argc == 1)
    {
      getproctree();
    }
    else
    {
      printf(2, "Error: too many arguments!\n");
    }
  }

  exit();
  return 0;
}