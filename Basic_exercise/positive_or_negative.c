#include<stdio.h>

int main()
{
    //input
    int num ;
    printf("Enter a Number : ");
    scanf("%d" , &num);

    //checking
    if (num == 0){
        printf("The Given Number is Zero !");
    }
    else if (num >0){
        printf("The Given Number is Positive !");
    }
    else{
        printf("The Given Number is Negative !");
    }

    return 0 ;
}