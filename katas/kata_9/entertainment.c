/*

Write a function that takes an integer flight_length (in minutes) and a list of
integers movie_lengths (in minutes) and returns a boolean indicating whether
there are two numbers in movie_lengths whose sum equals flight_length.

When building your function:

    Assume your users will watch exactly two movies
    Don't make your users watch the same movie twice
    Optimize for runtime over memory

*/


#include <stdio.h>
#include <stdbool.h>

bool flight (int flight_length, int movie_lengths[]){
  int contador = 0;
  bool bandera = false;
  for(int i = 0; i < (sizeof(movie_lengths)/sizeof(int)); i++){
    for(int j = 0; j < (sizeof(movie_lengths)/sizeof(int)); j++){
      contador = movie_lengths[i] + movie_lengths[j];
      if(contador == flight_length){
        bandera = true;
      }
      contador = 0;
    }
  }
}

int main() {
  int flight_length = 120;
  int movie_lengths[] = {60,80,50,60,70};
  bool bandera = flight(flight_length,movie_lengths);
  if(bandera){
    printf("Si hay dos pelicualas\n");
  }else{
    printf("No hay dos peliculas\n");
  }
}
