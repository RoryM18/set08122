#include<stdio.h>

int main()
{
	int grades[6] = {51, 62, 55, 41, 52, 56};
	int length = 0;
	int grades2[3] = {52,78,55};
	
	for(int i =0; i<6; i++)
	{
		i = length;
		
	}
	
	for(int i =0; i<length; i++)
	{
		printf("%d \n", grades2[i]);
	}
	
	for(int i =0; i<6; i++)
	{
		printf("%d \n", grades[i]);
	}
	
	
	int a[100];
	size_t s = sizeof(a);
	printf("%zu bytes\n", s);
	
	size_t num = s/sizeof(int);
	printf("space for storing %zu elements\n", num);
	
	
	
	return 0;
}
