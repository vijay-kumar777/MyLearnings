
#include <stdio.h>
void selectionSort(int*,int);
void swap(int *p1,int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main()
{
    
    int arr[]={29,4,2,89,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
    int min_index=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min_index])
        min_index=j;
    }
    swap(&arr[min_index],&arr[i]);
    }
}
