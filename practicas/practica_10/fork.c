#include <stdio.h>
#include <unistd.h>

int main() {

  int pid;

  pid = fork();
  if(pid == 0){
    execlp("/Calculator","Calculator",(char *)0);
    printf("Soy hijo\n");
  }else{
    printf("Soy padre\n");
  }
  return 0;
}
