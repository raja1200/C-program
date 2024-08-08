#include <stdio.h>

int main()
{
    // input form user
   int num1 , num2 , num3 ;
  
   printf("Enter Number1 : "); // num1 input
   scanf("%d" , &num1);   

   printf("Enter Number2 : ");
   scanf("%d" , &num2);

   printf("Enter Number3 : ");
   scanf("%d" , &num3);
   printf("\n");

   //checking process
   if ((num1 > num2) && (num1 > num3)){
    printf("%d is Greater than %d and %d ", num1 , num2 , num3);
   } 
   else if ((num2 > num1) && (num2 > num3)){
    printf("%d is Greater than %d and %d ", num2 , num1 , num3);
   }
   else{
    printf("%d is Greater than %d and %d ", num3 , num1 , num2);
   }

   return 0;
}