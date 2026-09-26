#include <stdio.h>
#include <string.h>
#include "add_todo.h"

int main(int argc, char *argv[]) {

  FILE* fptr;

  // Missing an argument
  if (argc <= 1) {
     printf("todo: missing file operand\nTry 'todo --help' for more information.");
     return -1;
  } 

  // Add a new task in the tasklist
  if 
    (strcmp(argv[1], "-a") == 0 || 
    (strcmp(argv[1], "--add") == 0)) {
      add_todo();

  // Remove a task in the list
  } else if 
    (strcmp(argv[1], "-rm") == 0 || 
    (strcmp(argv[1], "--remove") == 0)) {

    fptr = fopen("test.txt", "r");
    fclose(fptr);

    printf("REMOVE");
  

    // Read the content of the list
  } else if 
    (strcmp(argv[1], "-l") == 0 || 
    (strcmp(argv[1], "--list") == 0)) {

  // I also have to verify if the content is empty or not, if it is, printf("No task available (--add to add another one)")
    fptr = fopen("test.txt", "r");

    // The problem here is that the file doesn't exist, I have to verify if it exists before doing this condition
    if (fptr == NULL) {
      printf("Error opening file");
    } else if (fptr = NULL) {
      printf("No task available (--add to add another one)");
    }

    fclose(fptr);

    printf("LIST");

    // Help command
  } else if (strcmp(argv[1], "--help") == 0) {
    printf("HELP");

    // Invalid operand
  } else {
    printf("todo: missing file operand\nTry 'todo --help' for more information.");
  } return 0;
}

// Verify if there is an argument
// Yes ? verify the argument, -a (=add) -rm (=remove) -l (=list(Check the list of the tasks))

// Create a file which serve has a database
// When I want to add a task in it: file open and add the line 
// When I want to remove a line in it: remove the number of the line
// When I want to read the line: simply open and read  the content of the  file
//
