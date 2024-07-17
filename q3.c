#include<stdio.h>
int main()
{

    int x,y,z;
    float k;
    printf("\n enter numbers");
    scanf("%d\n%d\n%d",&x,&y,&z);
    k=x*x-y/z;
    printf("\n k=%.3f",k);
    return 0;
}
