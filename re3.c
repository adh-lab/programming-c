#include<stdio.h>
int main()
{
    int x,y;
    printf("\n enter numbers");
    scanf("%d\n%d",&x,&y);
    if(x==y || x<y)
    {
        printf("\nTRUE");

    }
    else
    {
    printf("\nFALSE");
        }
    return 0;
}
