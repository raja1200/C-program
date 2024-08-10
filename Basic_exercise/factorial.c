#include <stdio.h>

int main()
{
    //user input
    int num , fact , i ;
    printf("Enter a Number :");
    scanf("%d",&num);

    //calculation process
    fact = 1;
    for (i=num ; i > 0 ; i--)
    {
        fact = fact * i ;
    }
    printf("The Factroial of %d is %d ", num , fact);

    return 0 ;
}