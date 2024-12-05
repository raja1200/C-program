#include<stdio.h>

int main()
{
	//array input
	int lst[100] , size , i ;
	printf("Enter Array Size :");
	scanf("%d" , &size);
	for(i=0 ; i<size ; i++)
	{
		printf("Enter element for %d index : ", i);
		scanf("%d", &lst[i]);
	}
    
	