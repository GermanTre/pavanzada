#include <stdio.h>

int main() {
  int a = 4;
  float f = 7.5;

  int *p;

  int max = 2147483647;
  long int d;

  int b = a + (int)f;
  float c = a * f;

  d = (long)max * (long)max;

  p = &a; // apunta a la direccion
  *p = 7;// apunta al dato

  int arreglo[5]={0,2};

  *(arreglo +1)=250;

  for(int k =0; k< sizeof(arreglo)/sizeof(arreglo[0]);k++){
    arreglo[k]=67;
    printf("arreglo[%d] = %d\n",k,arreglo[k]);
  }

  printf("a = %d, b = %d, d = %ld\n",a,b,d);
  printf("f = %f, c = %f\n",f,c);

  printf("a = %p\n",p);

  return 0;

  //gcc cast.c -o cast.exe
}
