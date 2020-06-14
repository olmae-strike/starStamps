#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

void main()
{
	int n;
	char ch;
	//fflush(stdin);
	ch = _getch();
	n = atoi(&ch);
	for (int i = 0; i < 2 * n - 1; i++)
	{	
		if (i < n)
		{
			for (int j = 0; j < i; j++)
				printf(" ");

			for (int j = 0; j < 2 * n - 2 * i - 1; j++)
				printf("*");
		}
		else
		{
			for (int j = 0; j < n-(i-n)-2 ;j++)
				printf(" ");
			for (int j = 0; j < 3 + 2 * (i - n); j++)
				printf("*");
		}


		printf("\n");

	}


}