#include <stdio.h>
#include "33sub.h"

int main(void){


  /* è¡å */
  int a1_1=5;
  int a1_2=7;

  int b1_1=2;
  int b1_2=3;

  int c1_1, c1_2;

  sum31_c1_1(a1_1, b1_1, c1_1);
  sum31_c1_2(a1_2, b1_2, c1_2);

  printf("\nè¡å C = A + B\n");
  printf("C1_1 = %d\n", sum31_c1_1(a1_1, b1_1, c1_1));
  printf("C1_2 = %d\n", sum31_c1_2(a1_2, b1_2, c1_2));
  

  return 0;
}