#include "turboc.h"

void main()
{
	int n;
	char ch;
	//fflush(stdin);
	ch = _getch();
	n = atoi(&ch);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < (2*(n-i)-1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
}