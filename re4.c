#include<stdio.h>
int main()
{
    int x,y,z;
    printf("\n enter numbers");
    scanf("%d\n%d",&x,&y);
     if((x*x-y)>(y*y-x))
    {
    printf("\nTRUE");
    }
    else
    {
    printf("\nFALSE ");
    }
    return 0;
}
