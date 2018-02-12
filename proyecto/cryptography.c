#include <stdio.h>
#include <stdlib.h>

int main(){
  int bandera = 0;
  int contador = 0;
  int contador_numero;
  int numero_actual = 2;
  int numeros_primos[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,
                      53,59,61,67,71,73,79,83,89,97,101,103,107,
                      109,113,127};
  int cantidad_numeros;

  scanf("%d",&cantidad_numeros);

  int numeros_lugar[cantidad_numeros];
  int resultado[cantidad_numeros];

  for(int i = 0; i<cantidad_numeros; i++){
    scanf("%d",&numeros_lugar[i]);
  }


  for(int i = 0; i<cantidad_numeros; i++){

    if(numeros_lugar[i]>31){
      contador = 0 ;
      numero_actual= 128;
      contador_numero = 31;
      bandera = 0;

      while (bandera == 0) {
        for(int u = 0 ; u<31; u++){
          if(numero_actual%numeros_primos[u] == 0){
            numero_actual++;
            break;
          }
          contador++;
        }
        if(contador >= 30){
          contador_numero++;
          contador = 0;
          numero_actual++;
        }
        if(numeros_lugar[i] == contador_numero){
          resultado[i]=numero_actual-1;
          bandera=1;
        }
      }

    }else{
      resultado[i]=numeros_primos[(numeros_lugar[i])-1];
    }
  }
  for(int i = 0 ;i<cantidad_numeros; i++){
    printf("%d\n",resultado[i]);
  }
}
