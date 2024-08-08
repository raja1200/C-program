#include<stdio.h>

int main()
{
    //user input
    int mark ;
    printf("Enter Your Mark : ");
    scanf("%d" , &mark);
    
    //checking process
    if(mark > 90){
        printf("Your Grade is 'O' !");
    }else if (mark > 80 && mark <= 90){
        printf("Your Grade is 'A+' !");
    }else if (mark > 70 && mark <= 80){
        printf("Your Grade is 'B+' !");
    }else if (mark > 60 && mark <= 70){
        printf("Your Grade is 'B' !");
    }else if (mark >= 50 && mark <= 60){
        printf("Your Grade is 'C' !");
    }else{
        printf("Your Grade is 'RA' !");
    }
    return 0;

    
}