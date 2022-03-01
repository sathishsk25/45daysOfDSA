#include<iostream>
using namespace std;

void merge(int arr[],int l, int mid, int h){
    int arr2[h+1];
    int i,j,k;
    i=l; k=l; j=mid+1;
    while(i<=mid && j<=h){
        if(arr[i]>arr[j])
        arr2[k++] = arr[j++];
        else
        arr2[k++] = arr[i++];
    }
    for(; i<=mid; i++)
    arr2[k++]=arr[i];
    for(; j<=h; j++)
    arr2[k++]=arr[j];

    for(int i=l; i<=h; i++)
    arr[i] = arr2[i];
}

void mergeSortI(int arr[],int n){
    int p,i,l,mid,h;
    for(p=2; p<=n; p=p*2){
        for(i=0; i+p-1<n; i=i+p){
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            merge(arr,l,mid,h);
        }
    }
    if(p/2<n)
    merge(arr,0,p/2-1, n);
}

void mergeSortR(int arr[],int l, int h){
    int mid;
    if(l<h){
        mid = (l+h)/2;
        mergeSortR(arr,l,mid);
        mergeSortR(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}
int main(){
    int arr[] = {4,6,2,8,1,3,9,7,5};
    int len = sizeof(arr)/sizeof(arr[1]);
    
    mergeSortI(arr,len);
    mergeSortR(arr,0,len);
    for(int i=0; i<len; i++)
    cout << arr[i] << " ";
}
