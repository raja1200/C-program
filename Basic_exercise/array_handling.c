//creating array form user input 
#include <stdio.h>

int main() {
   int count , i , element;
     
   printf("Enter Number of Count : ");
   scanf("%d",&count);

   //array declaration
   int lst[count];  
   
   printf("\n"); //empty line
   
   //To insert array values 
   for (i=0 ; i < count ; i++ )
   {
       printf("Enter Index position of %d : ", i);
       scanf("%d",&element);
       lst[i] = element ;
   }
   printf("\n");

   //To print array
   for(i=0 ; i < count ; i++)
   {
       printf("Index %d value : %d \n" , i , lst[i]);
   }

    return 0;
}