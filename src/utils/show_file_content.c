#include <stdio.h>
#include <sys/stat.h>

void show_file_content() {
  FILE* fptr;

// I also have to verify if the content is empty or not, if it is, printf("No task available (--add to add another one)")
  fptr = fopen("test.txt", "rb");

  // FPTR doesn't exist in the directory
  if (fptr == NULL) {
    fprintf(stderr,"No task available (Use --add to add one)");

  // FPTR exists but is empty
  } else if (fptr != NULL) {
    struct stat st;

      if (stat("test.txt", &st) == 0) {
        if (st.st_size == 0 ) {
          fprintf(stderr,"No task available (Use --add to add one)");
        } else {
          char buff[100];
          while (fgets(buff, sizeof(buff), fptr) != NULL) {
            printf("%s", buff);
          }
        }
      }
    fclose(fptr);
  }
}
