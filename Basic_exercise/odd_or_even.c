#include<stdio.h>

int main()
{
    //input from user
    int num ;
    printf("Enter a Number : ");
    scanf("%d",&num);

    //checking process
    if (num % 2 == 0){
        printf("The Given Number is Even !");
    }else{
        printf("The Given Number is Odd !");
    }

    return 0 ;
}