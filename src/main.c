#include <stdio.h>
#include <string.h>
#include "commands.h"

int main(int argc, char *argv[]) {

  // Missing an argument
  if (argc <= 1) {
     printf("todo: missing file operand\nTry 'todo --help' for more information.");
     return -1;
  } 

  // Add a new task in the tasklist
  if 
    (strcmp(argv[1], "-a") == 0 || 
    (strcmp(argv[1], "--add") == 0)) {
      cmd_add();

  // Remove a task in the list
  } else if 
    (strcmp(argv[1], "-rm") == 0 || 
    (strcmp(argv[1], "--remove") == 0)) {
      cmd_remove();

    // Read the content of the list
  } else if 
    (strcmp(argv[1], "-l") == 0 || 
    (strcmp(argv[1], "--list") == 0)) { 
      cmd_list();

    // Help command
  } else if (strcmp(argv[1], "--help") == 0) {
      cmd_help();

    // Invalid operand
  } else {
      printf("todo: missing file operand\nTry 'todo --help' for more information.");
  } 
  return 0;
}

// Verify if there is an argument
// Yes ? verify the argument, -a (=add) -rm (=remove) -l (=list(Check the list of the tasks))

// Create a file which serve has a database
// When I want to add a task in it: file open and add the line 
// When I want to remove a line in it: remove the number of the line
// When I want to read the line: simply open and read  the content of the  file
//
