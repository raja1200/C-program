#include <stdio.h>

int main() 
{
	int count , i , element;

	printf("Enter Number of Count : ");
	scanf("%d",&count);

	//array declaration
	int lst[count];

	printf("\n"); //empty line

	//To insert array values
	for (i=0 ; i < count ; i++ )
 	{
		printf("Enter Index position of %d : ", i);
		scanf("%d",&element);
		lst[i] = element ;
	}
	printf("\n");

	//To find the smallest in the array
	int smallest = lst[0];
	int j ;

	for (i=0 ; i < count ; i++) {
		if(lst[i] < smallest) {
			smallest = lst[i];
		}
	}
	printf("The Smallest Element in the Array is %d ", smallest);
	return 0;
}
