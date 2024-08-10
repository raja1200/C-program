#include <stdio.h>

int main()
{
    //user input
    int num1,num2,sum,i ;//i-counter variable
    printf("Enter Number1 : ");
    scanf("%d", &num1);

    printf("Enter Number2 : ");
    scanf("%d", &num2);
    
    //before calculation
    sum = 0;
    
    //calculation process
    for (i=num1 ; i<=num2 ; i++)
    {
        sum = sum + i ;
    }
    printf("Sum of Numbers form %d to %d is %d", num1 , num2 , sum);

    return 0 ;
}