#include <stdio.h>

void remove_todo() {
    FILE* fptr;

    fptr = fopen("test.txt", "r");
    fclose(fptr);

    printf("REMOVE");
}
