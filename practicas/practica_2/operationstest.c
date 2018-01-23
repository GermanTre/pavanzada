#include <stdio.h>
#include "operations.h"

void printMassage(int , char *, char *);
int testAdd(void);
int testSub(void);

int main() {
  // Test add
  printMassage(testAdd(),
              "add test passed",
              "add test failed");


  //Test substraction
  printMassage(testSub(),
              "substraction test passed",
              "substraction test failed");


  return 0;
}

void printMassage(int condition, char *messagePass, char *messageFail){

  if(condition){
    printf("%s\n",messagePass);
  }else{
    printf("%s\n",messageFail);
  }
}

int testAdd(){
  int a = 5;
  int b = 7;

  int result = add(a,b);
  int expected = a + b;

  return result== expected;
}

int testSub(){
  int a_s = 10;
  int b_s = 5;

  int result_s = substraction(a_s,b_s);
  int expected_s = a_s - b_s;

  return result_s==expected_s;
}
