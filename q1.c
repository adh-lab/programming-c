#include<stdio.h>
int main()
{

    int x,y,z;
    float k;
    printf("\n enter numbers");
    scanf("%d %d %d ",&x,&y,&z);
    k=x+y*z/4%2-1;
    printf("\n k=%.3f",k);
    return 0;
}
