#include<stdio.h>
int main()
{
int i,j,k,m;
printf("\n enter values of i,j and m");
scanf("%d\n%d\n%d",&i,&j,&m);
k=i||j&m&&i;
printf("\nk=%d",k);
return 0;
}
