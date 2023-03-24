#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int x = 10;
int
main(int argc, char *argv[])
{
  printf("adhahdh\n");
  if(fork()==0){
    x +=10;
    printf("%d\n", x);
  }else{
    x-=5;
    printf("%d\n", x);
    wait(0);
  }
  exit(0);
}
