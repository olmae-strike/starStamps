#include "turboc.h"

void main()
{
	int n;
	char ch;
	//fflush(stdin);
	ch = _getch();
	n = atoi(&ch);
	for (int i = 0; i < 2*n-1; i++)
	{
		if (i < n)
		{
			for (int j = 1; j < n - i; j++)
			{
				printf(" ");
			}
			for (int j = 0; j < (2 * i) + 1; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (int j = 0; j < i-n+1; j++)
			{
				printf(" ");
			}
			for (int j = 0; j < 2*n-3-2*(i-n); j++)
			{
				printf("*");
			}
		}

		printf("\n");
	}
}