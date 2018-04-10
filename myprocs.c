#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
  printf(1,"The number of programs running in the sistem are %i\n", getprocs());
  exit();
}