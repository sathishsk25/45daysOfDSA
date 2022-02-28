#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int arr[],int n){
    int flag;
    for(int i=0; i<n-1; i++){
        flag=0;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0) break;
    }
}

int main(){
    int arr[] = {4,6,2,8,1,3,9,7,5};
    int len = sizeof(arr)/sizeof(arr[1]);
    BubbleSort(arr,len);
    for(int i=0; i<len; i++)
    cout << arr[i] << " ";
}
