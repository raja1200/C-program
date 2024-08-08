#include<stdio.h>

int main()
{
   // input form user
   int num1 , num2 ;
  
   printf("Enter Number1 : "); // num1 input
   scanf("%d" , &num1);   

   printf("Enter Number2 : ");
   scanf("%d" , &num2);

   //checking process
   if (num1 ==  num2){
    printf("%d is Equal to %d !" , num1 , num2 );
   }
   else if (num1 > num2){
    printf("%d is Greater than %d" , num1 , num2 );
   }
   else{
    printf("%d is Greater than %d" , num2 , num1 );
   }

   return 0 ;




}