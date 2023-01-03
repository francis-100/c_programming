#include <stdio.h>

/**
*main - learning c programming syntax
*
*Return: Always 0
*/

int main(void)
{

/*Hello Francis!*/
	printf("\n");
	printf("Hey Francis!\n");
	printf("\n");

/*for loop to print numbers in ascending order*/
	for (int j = 0; j < 4; j++)
	{
		printf("%d\n", j);
	}
	printf("\n");

/*for loop to print lower case letters*/
	for (char lc = 'a'; lc <= 'z'; lc++)
	{
		printf("%c", lc);

	}
	printf("\n");

/*for loop to print upper case letters in reverse*/
	for (char uc = 'Z'; uc >= 'A'; uc--)
	{
		printf("%c", uc);
	}
	printf("\n");
	printf("\n");

/*for loop to print output a predifined number of times*/

	int i;

	for (i = 0; i <= 2; i++)
	{
		printf("This is a for loop\n");
	}
	printf("\n");

/*Nested loop*/
	for (int ol = 0; ol < 5; ol++)
	{
		printf("THIS IS THE OUTER LOOP\n");
			for (int lp = 0; lp < 3; lp++)
			{
				printf("  This is the inner loop\n");
			}
	}
	printf("\n");

	return (0);

}
