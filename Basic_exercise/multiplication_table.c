#include <stdio.h>

int main()
{
    //user input
    int num , i ; //i-counter variable
    printf("Enter a Number : ");
    scanf("%d" , &num);
    printf("\n[The Multiplication Table]");

    //calculation process
    for(i=1 ; i <= 10 ; i++)
    {
        int result = num * i ;
        printf("\n\t %d x %d = %d" , num , i , result);
    }
    return 0 ;
}