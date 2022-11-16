#include "main.h"

/**
 * main - entry point
 * @argc: int entry
 * @argv: char entry
 * @glob: global variable
 * Return: 0
 */

int main(int argc, char **argv, char **glob)
{
	char *line = NULL;
	char *delim = "\t \a\n";
	char *command;
	char **tokens;
	(void)argc;

	tokens = find_path(glob);

	signal(SIGINT, SIG_IGN);
	while (1)
	{
		line = read_line();
		argv = splits(line, delim);
		command = args_path(argv, tokens);
		if (command == NULL)
			execute(argv);
		free(line);
		free(argv);
		free(command);
	}
	return (0);
}
