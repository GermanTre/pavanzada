#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "qsort.h"

static compareById(const void *element1, const void *element2){
  Student *student1 = (Student *)element1;
  Student *student2 = (Student *)element2;
  return student1->id - student2->id;
}

static compareByName(const void *element1, const void *element2){
  Student *student1 = (Student *)element1;
  Student *student2 = (Student *)element2;
  return strcmp(student1->name,student2->name);
}

void sortById(Student * class, int numbElements){
  qsort((void *)class, (size_t)numbElements,sizeof(Student), compareById);
  return;
}

void sortByName(Student * class, int numbElements){
  qsort((void *)class, (size_t)numbElements,sizeof(Student), compareByName);
  return;
}
