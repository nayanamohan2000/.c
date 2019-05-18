
#include<stdio.h>
void get_input(int *a,int *b)
{
printf("enter the value of a and b\n");
scanf("%d %d",a,b);
}
int addnum(int a,int b)
{
int c;
c=a+b;
return c;
}
int output(int c)
{
printf("%d,c");
}
void main()
{
int a,b,c;
void get_input( &a, &b);
c=addnum(a,b);
output(c);
}

