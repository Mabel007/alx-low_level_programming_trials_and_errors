#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - entry point of the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 (Success), 1(error);
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
