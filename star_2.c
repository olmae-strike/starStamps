#include "turboc.h"

void main()
{
	int n;
	//char ch;
	////fflush(stdin);
	//ch = getch();
	//n = atoi(&ch);
	scanf_s("%d\n", &n);
	fflush(stdin);
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n-i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}