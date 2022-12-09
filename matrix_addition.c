#include<stdio.h>
int main()
{
    int a[20][20],b[20][20],c[20][20],i,n,m,j;
    printf("Enter no. of rows an col: ");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of 1st matrix: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("First matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("Enter the elements of 2st matrix: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    }
    printf("Second matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d\t",b[i][j]);
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        c[i][j]=a[i][j]+b[i][j];
    }
    printf("The Resultant matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%d\t",c[i][j]);
        printf("\n");
        return 0;
    }
}
