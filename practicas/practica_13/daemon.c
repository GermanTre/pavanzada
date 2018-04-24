#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

int main(){
  int pid;
  pid = fork();
  if(pid == 0){
    pid = fork();
    if(pid == 0){
      printf("Daemon\n");
      fclose(stdin);
      fclose(stdout);
      fclose(stderr);
      unmask(0);
      chdir("/tmp");
      while(1){

      }
    }
  }
  return 0;
}
