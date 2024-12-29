#include<stdio.h>
int main()
{
    int m, n, sum=0;
    int a[3][4], b[4][2], result[3][2];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("enter [%d] [%d]=",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    }
    
    printf("enter the secod matrix\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
             printf("enter [%d] [%d]=",i,j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
     for(int i=0;i<3;i++)
    {
    for(int j=0;j<2;j++)
     {
        for(int k=0;k<4;k++)
        {
            sum+=a[i][k] * b[k][j];
        }
        result[i][j]=sum;
        sum=0;
     }
    }
    for(int i=0;i<3;i++)
    {
     for(int j=0;j<2;j++)
     {
         printf("%d ", result[i][j]);
     }
    }
    return 0;
}
____________________________________________________________________________________
//Reverse element
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=2;i>=0;i--)
    {
        for(j=2;j>=0;j--)
        {
         printf("\n the reverse order element- %d",a[i][j]);
        }
    }
    return 0;
}