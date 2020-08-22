#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int star, l, r;
int main()
{
	printf("Enter number : ");
	scanf("%d", &l);
	for (r = 1; r <= l; r++)
	{
		if (r == 1 || r == l)
		{
			for (star = 1; star <= l; star++)
			{
				printf("*");
			}
		}
		else
		{
			for (star = 1; star <= l; star++)
			{
				if (star == 1 || star == l)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
}
