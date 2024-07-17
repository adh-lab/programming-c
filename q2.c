#include<stdio.h>
int main()
{
    int x,y,z;
    float k;
    printf("\nenter numbers\n");
    scanf("%d\n%d\n%d",&x,&y,&z);
    k=x%y+z*z;
    printf("\n k=%.3f",k);
    return 0;
}
