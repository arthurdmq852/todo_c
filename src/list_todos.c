#include <stdio.h>

void list_todos() {
  FILE* fptr;
  int size;

// I also have to verify if the content is empty or not, if it is, printf("No task available (--add to add another one)")
  fptr = fopen("test.txt", "rb");

  // FPTR doesn't exist in the directory
  if (fptr == NULL) {
    fprintf(stderr,"NULL No task available (--add to add one)");

  // FPTR exists but is empty
  } else if (fptr != NULL) {
    fseek (fptr, 0, SEEK_END);
    size = ftell(fptr);
  
      if (size == 0) {
        fprintf(stderr,"EMPTY No task available (--add to add one)");
      } else {
        printf("LIST");
        fclose(fptr);
    }
  }
}
