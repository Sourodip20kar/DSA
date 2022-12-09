#include<stdio.h>
int main(){
    int i,j,a[10],n,swap;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element no %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>0;i--)
    {
        for(j=0;j<1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }
        }
    }
    printf("\nThe new array is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\b");
}
