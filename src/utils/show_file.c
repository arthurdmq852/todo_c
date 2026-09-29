#include <stdio.h>
#include "file_utils.h"

int show_file() {
  FILE* fptr;
// I also have to verify if the content is empty or not, if it is, printf("No task available (--add to add another one)")
   fptr = fopen("test.txt", "r");

  // FPTR doesn't exist in the directory
  if (fptr == NULL) {
    fprintf(stderr,"No task available (Use --add to add one)");
    return -1;
  } 
  
  int c = fgetc(fptr);
  if (c == EOF) {
    fprintf(stderr,"No task available (Use --add to add one)");
    fclose(fptr);
    return -1;
  }

  ungetc(c, fptr);

  char buff[100];
  while(fgets(buff, sizeof(buff), fptr) != NULL) {
    printf("%s", buff);
  }

  fclose(fptr);
  return 0;
}
