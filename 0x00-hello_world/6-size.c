#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	6. Size is not grandeur, and territory does not make a nation
mandatory
Write a C program that prints the size of various types on the computer it is compiled and run on.
You should produce the exact same output as in the example
Warnings are allowed
Your program should return 0
You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
vi 6-size.c
#include <stdio.h>

/**
*main -Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}


