#include<stdio.h>
int add(int x,int y)
{
int z;
z=x+y;
return z;
}
main()
{
int a,b,c;
printf("enter the value of a,b\n");
scanf("%d %d",&a,&b);
c=add(a,b);
printf("%d+%d=%d\n",a,b,c);
}
