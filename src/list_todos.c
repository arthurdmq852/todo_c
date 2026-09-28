#include <stdio.h>

void list_todos() {
  FILE* fptr;

// I also have to verify if the content is empty or not, if it is, printf("No task available (--add to add another one)")
  fptr = fopen("test.txt", "r");

  if (fptr == NULL) {
    fprintf(stderr,"No task available (--add to add one)");
  //} else if {
    //file exists but is empty, maybe try something like "fptr == null || fptr == empty"
    } else {
    printf("LIST");
  }
  fclose(fptr);
}
