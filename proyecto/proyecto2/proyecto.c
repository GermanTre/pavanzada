#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int reversDigits(int num);

int main(){
  int numero_numeros = 0;
  int numero = 0;
  int pasos = 0;
  char s[20];


  scanf("%d",&numero_numeros);

  for(int i = 0; i<numero_numeros;i++){
    scanf("%d",&numero);
    while(numero!=1){
      if(reversDigits(numero)<numero){
          numero = reversDigits(numero);
          pasos++;
      }else{
        numero--;
        pasos++;
      }
      printf("%d\n", numero);
    }
    printf("Pasos = %d\n", pasos);
  }

  return 0;
}

int reversDigits(int num)
{
    int rev_num = 0;
    while(num > 0)
    {
        rev_num = rev_num*10 + num%10;
        num = num/10;
    }
    return rev_num;
}
