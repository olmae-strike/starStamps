#include "turboc.h"
#pragma warning (disable:4996)
int main(int argc,char** argv)
{
	int n;
	char ch;
	//fflush(stdin);
	ch=getch();
	n = atoi(&ch);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}