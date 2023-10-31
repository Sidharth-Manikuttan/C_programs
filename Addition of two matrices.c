#include<stdio.h>
void main()
{
    int a[50][50],b[50][50],d[50][50],i,j,r,c;
    printf("Enter the order of the matrix:\n");
    scanf("%d%d",&r,&c);
    printf("Enter the values of the matrix A:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    } 
    printf("Enter the values of matrix B:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            d[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The addition of two matrices is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%4d",d[i][j]);
        }
        printf("\n");
    }
}   
