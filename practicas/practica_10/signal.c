#include <stdio.h>
#include <signal.h>

void receiveSignal(int sig){
  printf("Hola mundo\n");
  printf("Recibi %d\n",sig);
}

int main(){
  signal(SIGUSR1,receiveSignal);
  while(1){

  }
  return 0;
}
