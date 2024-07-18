#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("\n enter 2 numbers");
    scanf("%d\n%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("\n After swapping a=%d , b=%d",a,b);
    return 0;
}
