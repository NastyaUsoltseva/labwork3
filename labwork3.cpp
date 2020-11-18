#include <iostream>
#include<stdio.h>
int main()
{
	int array2[10];
	int array[10];
	printf("Enter values of arrray");
	for (int i = 0;i < 10;i++)
	{
		scanf_s("%d", &array[i]);
	}
	for (int i = 0;i < 10;i++)
	{
		printf("%d", array[i]);
	}
	for (int i = 0;i < 10;i++)
	{
		if (i <= 0)
		{
			array2[10] = i;
		}
	}
	for (int i = 0;i < 10;i++)
	{
		printf("%d", array2[i]);
	}
	return 0;
}