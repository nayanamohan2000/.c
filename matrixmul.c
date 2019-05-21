 #include<stdio.h>
void matmul(int a[][10],int b[][10],int c[][10],int,int,int,int);
int main()
{
    int a[10][10],b[10][10],c[10][10],m,n,i,j,p,q;
    printf("enter the size of matrix A\n");
    scanf("%d %d",&m,&n);
    printf("enter the size of matrix B\n");
    scanf("%d %d",&p,&q);
 if(n!=p)
{
    printf("multiplication of matrix is not possible\n");
}
printf("enter the values of matrix A\n");
for(i=0;i<m;i++)
    {
     for(j=0;j<n;j++)
      {
       scanf("%d",&a[i][j]);
      }
    }
printf("enter the values of matrix B\n");
for(i=0;i<p;i++)
 {
     for(j=0;j<q;j++)
      {
       scanf("%d",&b[i][j]);
      }
    }
printf("the resultant matrix\n");
 matmul(a,b,c,m,n,p,q);
 for(i=0;i<m;i++)
    {
     for(j=0;j<q;j++)
      {
       printf("%d",c[i][j]);
      }
    }
    void matmul(int a[][10],int b[][10],int c[][10],int m,int n,int p,int q)
  {
    int i,j,k;
    for(i=0;i<m;i++)
     {
      for(j=0;j<q;j++)
       {
        c[i][j]=0;
       }
     }
    for(i=0;i<m;i++)
    {
     for(j=0;j<q;j++)
      {
       for(k=0;k<n;k++)
        {
         c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
       }
      }
     }
    }
                
