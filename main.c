#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len = 0;
	int len1 = 0;
	int len3 = 0;

    len = printf("%d", 102);
    len1 = _printf("%d", 102);
    len3 = _printf("%K\n");

    printf("Printf count is %d\n", len);
    printf("My count is %d\n", len1);
	printf("i formater is %d\n", len3);
    
} 
