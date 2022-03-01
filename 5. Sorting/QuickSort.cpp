#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int A[],int l, int h){
    int pivot = A[l];
    int i=l, j=h;

    do{
        do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);
        if(i<j)
        swap(&A[i],&A[j]); 
    }while(i<j);
    swap(&A[l],&A[j]);
    return j; 
}

void QuickSort(int A[], int l, int h){
    int j;
    if(l<h){
        j=partition(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h); 
    }
}

int main(){
    int arr[] = {4,6,2,8,1,3,9,7,5,10,INT32_MAX};
    int len = sizeof(arr)/sizeof(arr[1]);

    QuickSort(arr,0,len-1);
    for(int i=0; i<len-1; i++)
    cout << arr[i] << " ";
}
