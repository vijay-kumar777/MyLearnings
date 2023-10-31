#include <stdio.h>
void merger(int a[],int start,int mid,int end){
    int ls=mid-start+1,rs=end-mid;
    int la[ls],ra[rs];
    int i,j;
    for(i=0;i<ls;i++){
        la[i]=a[i+start];
    }
    for(j=0;j<rs;j++){
        ra[j]=a[mid+1+j];
    }
    i=j=0;
    int k=start;
    while(i<ls && j<rs){
        if(la[i]<ra[j])
        a[k++]=la[i++];
        else
        a[k++]=ra[j++];
    }
    while(i<ls) a[k++]=la[i++];
    while(j<rs) a[k++]=ra[j++];
}
void mergeSort(int a[],int start,int end){
    
    if(start<end){
        int mid;
        mid=(start+end)/2;
        mergeSort(a,start,mid);
        mergeSort(a,mid+1,end);
        merger(a,start,mid,end);
    }
}
int main(){
    int arr[]={10,2,5,6,32,12};
    mergeSort(arr,0,5);
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}