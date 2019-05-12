#include<stdio.h>
int get_input()
{
int a;
printf("enter the value of a\n");
scanf("%d",&a);
return a;
}
int add_one(int x)
{
int b;
b=x+1;
return b;
}
int output(int y)
{
printf("%d",y);
}
int main()
{
int a=get_input();
int b=add_one(a);
output(b);
}






