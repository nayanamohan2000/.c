#include<stdio.h>
void get_input(int *a,int *b)
{
 printf("enter the value of a and b\n");
 scanf("%d %d",a,b);
}
int add_num(int a,int b)
{
int c;
c=a+b;
return c;
}
void output(int c)
{
printf("%d,c");
}
void main( )
{
 int x,y,z;
 get_input(&x,&y);
 z=add_num(x,y);
 output(z);
}

