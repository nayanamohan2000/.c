#include<stdio.h>
void get_input(int *a,int *b,int *c)
{
    printf("enter the values of three num\n");
    scanf("%d %d %d",&a,&b,&c);
}
void compare(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
         {
             printf("a is the greatest\n");
         }
        else
             printf("c is the greatest\n");
     else if(b>c)
         {
             printf("b is the greates\n");
         }

         else
             printf("c is the greatest\n");
     }
}
void main()
{
    int a,b,c;
    get_input(&a,&b,&c);
    compare(a,b,c);
}





