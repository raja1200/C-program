#include<stdio.h>

int main()
{
    //user choice option
    printf("[Choices]\n\n");   //for empty line

    printf("Addition - 1\n");
    printf("Subraction - 2\n");
    printf("Mulitiplication - 3\n");
    printf("Division - 4\n\n");

    int choice ;
    printf("Enter Your Option :");
    scanf("%d" , &choice); 

    if(choice == 1 || choice == 2 || choice == 3 || choice == 4){
        //number input
        float num1 , num2 ;
        printf("Enter Number1 : ");
        scanf("%f", &num1);
        printf("Enter Number2 : ");       
        scanf("%f", &num2);

        if (choice == 1){
            printf("Result : %.1f", num1+num2);
        }
        else if (choice == 2){
            printf("Result : %.1f", num1-num2);
        }
        else if (choice == 3){
            printf("Result : %.1f", num1*num2);
        }
        else{
            printf("Result : %.1f", num1/num2);
        }

    }else{
        printf("Invalid choice , Try Again ! ");
    }
    return 0;

    
   

    
}