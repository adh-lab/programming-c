#include<stdio.h>
int main()
{

    int x,y,z;
    float k;
    printf("\n enter numbers");
    scanf("%d\n%d\n%d",&x,&y,&z);
    k=x+y-(x=y);
    printf("\n k=%.3f,y=%d",k,y);
    return 0;
}
