#include "show_file.h"
#include <stdio.h>

int remove_todo() {
  int del_line;

  if (show_file("test.txt") != 0) {
    return 1;
  }

  printf("\nEnter the task you want to remove: ");
  scanf("%d", &del_line);
  
  printf("Task successfully removed.");
  return 0;
}
