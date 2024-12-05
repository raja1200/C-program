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
	
	//process
	for (i = 1 ; i<size ;i++)
	{
 	 	int	temp = lst[i];      //temporary variable
		int j = i-1;   			//previous index
		while( temp < lst[j] && j >= 0)
		{
			lst[i] = lst[j]; //now , 1st element is 0th element
			j = j-1 ; 		//decrementing j
		}
		lst[i] = temp ; 
	}
	
	//displaying sorted array
	printf("Sorted Array : ");
	for(i=0 ; i<size ; i++)
	{
		printf("%d\t",lst[i]);
	}
	return 0 ;
}
