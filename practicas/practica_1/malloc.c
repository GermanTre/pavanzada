#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int doFullName( char *firsName,
                char *lastName,
                char **fullName){

  int sizeFirstName = strlen(firsName);
  int sizeLastName = strlen(lastName);

  *fullName = (char *)malloc((sizeFirstName + sizeLastName + 1) * sizeof(char));

  strcpy(*fullName, firsName);
  strcpy(*fullName + sizeFirstName, " ");
  strcpy(*fullName + sizeFirstName + 1, lastName);

  return 0;
}

int main() {
  char firsName[]= "German";
  char lastName[]= "Trevino";
  char *fullName;

  doFullName(firsName,lastName,&fullName);

  printf("Full name = %s\n",fullName);
  free(fullName);

  return 0;
}
