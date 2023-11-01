

#include <stdio.h>
void insertionSort(int arr[],int n){
    int i,j,key;
    for(int j=1;j<n;j++){
        key=arr[j];
        i=j-1;
        while(i>=0 && arr[i]>key){
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }
}
int main()
{
    int arr[]={20,45,10,4,58};
    int size=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
