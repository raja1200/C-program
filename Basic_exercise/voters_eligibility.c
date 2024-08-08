#include<stdio.h>

int main()
{ 
    //input from user
    int age ;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    
    //checking process
    if (age >= 18){
        printf("Your are Eligible for Voting !");
    }else{
        printf("Your are Not Eligible for Voting !");
    }
    
    return 0;
}