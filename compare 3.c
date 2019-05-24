#include<stdio.h>
void get_input(int *a,int *b,int *c)
{
    printf("enter the values of a,b,c\n");
    scanf("%d %d %d",a,b,c);
}
int compare(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
         {
          return a;
         }
        else
         {
          return c;
         }
     }
    else if(b>c)
   {
       return b;
    }
    else
    {
       return c;
    }
}
void output(int x)
{
  printf("%d\n",x);
}
void main()
{
    int a,b,c,x;
    get_input(&a,&b,&c);
    x=compare(a,b,c);
    output(x);
}


