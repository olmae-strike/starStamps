#include "turboc.h"

void main()
{
	int n;
	char ch;
	//fflush(stdin);
	ch = getch();
	n = atoi(&ch);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}