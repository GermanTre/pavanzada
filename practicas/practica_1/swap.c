#include <stdio.h>

int swap_no(int a, int b){
   int t;
   t = a;
   a = b;
   b = t;
   return 0;
}

int swap_si(int *a, int *b){
  int t;
  t = *a;
  *a = *b;
  *b = t;
  return 0;
}

int main(){
  int a = 5;
  int b = 7;

  swap_no(a,b);
  printf("swap_no\n a = %d, b = %d\n",a,b);

  swap_si(&a,&b);
  printf("swap_si\n a = %d, b = %d\n",a,b);
}
