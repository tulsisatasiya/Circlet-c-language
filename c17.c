#include<stdio.h>
int main (){
    int a,b,c;
        for(a=1;a<=5;a++)
    {
        for(c=a;c<5;c++)
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            printf("%d",b);
        }
        printf("\n");
        }
        for(a=5;a>=2;a--)
        {
        for(c=a-1;c<5;c++)
        {
            printf(" ");
        }
        for(b=2;b<=a;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}
