#include <stdio.h>

void cmd_add() {
  FILE* fptr;
  char task[50];

  fptr = fopen("test.txt", "a");

  printf("Enter a task: ");
  scanf("%s", task);
      
  fprintf(fptr, "- [ %s ]\n", task);

  printf("Task saved.");

  fclose(fptr);
}
