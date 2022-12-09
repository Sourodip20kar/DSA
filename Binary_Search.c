#include<stdio.h>
int binarysearch(int arr[], int start, int end,int search)
{
    while(start<=end){
    int middle=start+(end-start)/2;
    if(arr[middle]==search)
    {
        return middle;
    }
    if(arr[middle]<search)
    start=middle+1;
    else
    end=middle-1;
}
return -1;
}
int main(){
    int arr[5],search,i,found;
    printf("Enter the elements in ascending order: ");
    for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
    printf("Enter element to search: ");
    found=binarysearch(arr,0,4,search);
    if(found==-1)
    printf("Not found!!");
    else
    printf("Found at index: %d",found);
    return 0;
}