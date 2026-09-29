#include <stdio.h>
#include <sys/stat.h>

void list_todos() {
  FILE* fptr;

// I also have to verify if the content is empty or not, if it is, printf("No task available (--add to add another one)")
  fptr = fopen("test.txt", "rb");

  // FPTR doesn't exist in the directory
  if (fptr == NULL) {
    fprintf(stderr,"NULL No task available (--add to add one)");

  // FPTR exists but is empty
  } else if (fptr != NULL) {
    struct stat st;

      if (stat("test.txt", &st) == 0) {
        if (st.st_size == 0 ) {
          fprintf(stderr,"EMPTY No task available (--add to add one)");
      } else {
        printf("LIST");
    }
      fclose(fptr);
    }
  }
}
