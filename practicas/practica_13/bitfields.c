#include <stdio.h>

typedef struct d{
  unsigned flag:5;
  unsigned day:5;
  unsigned month:4;
  unsigned year;
} Data;

#define LEAP_MASK 0b10000
#define PRIME_MASK 0b00100

int main(){
  Data today = {4,23,4,2018};
  printf("size of data %d\n",sizeof(today));
  printf("Data %d/%d/%d\n",today.day,today.month,today.year);
  printf("Check today is 23\n");
  if(today.day ^ 23){
    printf("no today is no 23\n");
  }else{
    printf("yes today is 23\n");
  }
  today.flag = 0b11010;
  if((today.flag & (LEAP_MASK | PRIME_MASK)) != 0){
    printf("Year is leap\n");
  }
  return 0;
}
