#include <stdio.h>

int main() {
	
    int n;
    scanf("%d", &n);
  
    int sum = 0;
    for (int i = 0 ; i<=4 ; i++)
    {
        sum = sum + (n%10);  //strip the last number
        n = (int)n/10;      //delete the last number
    }
    printf("%d", sum);
    
    
    return 0;
}
