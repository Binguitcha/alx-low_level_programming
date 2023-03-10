#include <stdio.h>
#include "main.h"
/**
* main - Print the name of the program
* @argc: number of arguments
* @argv: array of arguments.
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int n = 0;
for (n = 0; n < argc; n++)
{
printf("%s\n", argv[n]);
}
return (0);
}
