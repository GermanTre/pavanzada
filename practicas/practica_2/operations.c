#include <assert.h>
#include "operations.h"

#define MAX_INT 2147483647


/**
* Use long addition to catch overflow
*/
int add(int a, int b){
  // Check a and b for a overflow
  long c = (long) a + b;
  assert(c <= MAX_INT && c > -MAX_INT);

  return (int)c;
}

int substraction(int a, int b){
  // Check a and b for a overflow
  long c = (long) a - b;
  assert(c <= MAX_INT && c > -MAX_INT);

  return (int)c;
}
