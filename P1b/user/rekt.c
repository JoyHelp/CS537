#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int i, j, k;
  i = getopenedcount();
  for(j = 0; j < 14; j++) {
    open("l.c", 0);
  }
  k = getopenedcount();
  printf(1, "The value is %d\n", k-i);
  exit();
}
