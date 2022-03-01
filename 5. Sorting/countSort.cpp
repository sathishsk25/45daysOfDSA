#include<iostream>
using namespace std;

int findMax(int arr[],int n){
    int max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max)
        max = arr[i];
    }
    return max;
}

void countSort(int arr[],int n){
    int *c;
    int max = findMax(arr,n);
    c = new int[max+1];
    for(int i=0; i<max+1; i++){
        c[i]=0;
    }
    for(int i=0; i<=max; i++){
        c[arr[i]]++;
    }
    int i=0,j=0;
    while(i<=max){
        if(c[i]>0){
            arr[j++]=i;
            c[i]--;
        }
        else
        i++;
    }
}


int main(){
    int arr[] = {4,6,2,8,1,3,9,7,5};
    int len = sizeof(arr)/sizeof(arr[1]);
    
    countSort(arr,len);
    for(int i=0; i<len; i++)
    cout << arr[i] << " ";
}
