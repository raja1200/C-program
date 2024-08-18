#include <stdio.h>
#include <math.h>

void update(int *a,int *b) {
    // Complete this function  
    int tempA = *a ;
    *a = (*a) + (*b) ;
    int posA = (int)fabs((double)tempA); //to retrun absolute value
    int posB = (int)fabs((double)*b);  
    if(posA > posB)
    {
        *b = posA - posB;
    }else{
        *b = posB - posA;
    }
   // *b = fdim(tempA , *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
