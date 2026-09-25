# todo

A small command-line to-do list project written in C. This is a temporary README while the program is still in development.

## Current status

- `-a` / `--add`: Prompts for a task and appends it to `test.txt`.
- `-rm` / `--remove`: Placeholder; task removal is not implemented yet.
- `-l` / `--list`: Placeholder; listing tasks is not implemented yet.
- `--help`: Placeholder; currently prints `HELP`.

The add command currently reads only one word for a task. File-opening errors and other input checks still need work.

## Build and run

```sh
cc main.c -o todo
./todo --add
```

Replace `main.c` with your source filename if it is different. When prompted, enter a single-word task. The program saves it in `test.txt` in the current directory.

## Planned improvements

- List saved tasks, including handling a missing task file.
- Remove a task by its line number.
- Accept tasks containing spaces.
- Check file and input errors.
- Add a useful help message.

---

This README is a placeholder and will be rewritten when the project is complete.
