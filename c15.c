#include<stdio.h>
int main (){
    int a,b,k;
    for(a=1;a<=5;a++)
    {
        for(k=a;k<5;k++)
        {
            printf(" ");
        }
        for(b=a;b>=1;b--)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}
