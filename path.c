#include "main.h"

/**
 * find_path - function that finds the path
 * @glob: global variable environment
 * Return: path in tokens
 */

char **find_path(char **glob)
{
	char *get_path, **tokens, *delim;

	delim = ":";
	get_path = _getenv(glob, "PATH");
	tokens = splits(get_path, delim);
	return (tokens);
}
