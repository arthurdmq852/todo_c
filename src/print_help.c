#include <stdio.h>

void print_help(void)
{
    puts("todo — manage tasks from the command line\n"
         "\n"
         "Usage:\n"
         "  todo <command>\n"
         "  todo --help\n"
         "\n"
         "Commands:\n"
         "  -a, --add               Add a new task\n"
         "  -l, --list              Show your tasks\n"
         "  --done <id>             Mark a task as complete\n"
         "  --undo <id>             Mark a task as incomplete\n"
         "  -rm, --remove <id>      Delete a task\n"
         "  --help                  Show this help page"
    );
}
