#include <stdio.h>
#include <stdlib.h>

int main(){

  int numeros_primos[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,
                      53,59,61,67,71,73,79,83,89,97,101,103,107,
                      109,113,127};

  int cantidad_numeros;
  scanf("%d",&cantidad_numeros);

  int cantidad_array;
  scanf("%d",&cantidad_array);

  int arr[cantidad_array];
  char temp;

  for(int i = 0; i < cantidad_array; i++){
    scanf("%d%c", &arr[i],&temp);
  }

  int resultado;
  int resultadoFinal;
  int contador = 0;

  for(int j = 0; j < sizeof(numeros_primos); j++){
    for(int k = 0 ; k < cantidad_array; k++){
      if(arr[k]==1){
        resultado = 0;
      }else{
        resultado = arr[k]%numeros_primos[j];
      }
      if(resultado == 0){
        contador++;
      }
    }
    if(contador == cantidad_array){
      resultadoFinal = numeros_primos[j];
      break;
    }else{
      contador = 0;
    }
  }
  printf("Resultado = %d\n", resultadoFinal);
}
