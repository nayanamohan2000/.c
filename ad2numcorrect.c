#include<stdio.h>
void get_input(int *a,int *b)
{
    printf("enter the value of a and b\n");
    scanf("%d %d",a,b);
}
int add2num(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
void output(int c)
{
    printf("%d\n",c);
}
void main()
{
    int a,b,c;
    get_input(&a,&b);
    c=add2num(a,b);
    output(c);
}


