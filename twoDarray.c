#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10],m,n;
    printf("enter the number of rows and columns ");
    scanf("%d %d",&m,&n);
    printf("enter the matrix A ");
    for(int i=0;i<m;i++)
    
        for(int j=0;j<n;j++)
        
            scanf("%d",&a[i][j]);
        
    
    printf("enter matrix B ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
        
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
        printf("the resultant array is \n");
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
             printf("%-8d",c[i][j]); 
        }
        printf("\n");
    }
    return 0;
}