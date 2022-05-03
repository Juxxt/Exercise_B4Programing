#include <stdio.h>
#include "11sub.h"

int main(void){

  /* 級数の二乗和 */

  int n=5;

  sum1(n);

  printf("級数の和 = %d\n", sum1(n));

  return 0;
}
