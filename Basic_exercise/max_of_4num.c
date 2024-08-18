#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four (int a , int b ,int c ,int d)
{
    int lst[] = { a , b  , c , d};
    int max = lst[0];
    int i ; //counter variable
    
    for(i = 0 ; i <= 3 ; i++)
    {
        if(lst[i] > max)
        {
            max = lst[i];
        }else{
            continue;
        }
    }
    return max ;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

//need to alter 