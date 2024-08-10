#include <stdio.h>
//fibonacci using for loop
int main()
{
    //user input
    int count ,i;
    printf("Enter Number of Terms :");
    scanf("%d", &count);

    //fibonacci variables
    int first , second ,sum ;
    first = 0;
    second = 1;
    sum = 0;

    //calculation process
    
    for (i = 1 ; i <= count ; i++)
    {
        printf("%d\n" , sum);
        
        first = second ;
        second = sum ;   
        sum = first + second ;
        
    }
    return 0 ;
}
