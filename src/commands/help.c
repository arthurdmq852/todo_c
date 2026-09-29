#include <stdio.h>

void cmd_help()
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
         "  --done                  Mark a task as complete\n"
         "  --undo                  Mark a task as incomplete\n"
         "  -rm, --remove           Delete a task\n"
         "  --help                  Show this help page"
    );
}
