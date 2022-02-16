#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size; 
    int length;
};

int BinarySearch(struct Array arr, int key){
    int l=0,h=arr.length-1;
    int mid = (l+h)/2;

    while(l<=h){
        if(arr.A[mid] == key)
        return mid;
        else if(arr.A[mid] > key)
        h = mid - 1;
        else 
        l = mid + 1;
    }
    return -1;
}

int BinarySearchR(int a[], int key, int l, int h){
    int mid = (l+h)/2;
    if(l<=h){
        if(a[mid] == key)
        return mid;
        else if(a[mid] > key)
        return BinarySearchR(a,key,l,mid-1);
        else 
        return BinarySearchR(a,key,mid+1,h);
    }
    return -1;
}


int main(){
    struct Array arr={{1,2,3,4,5,6,7,8,9,0},10,10};
    cout << "Element found at " << BinarySearch(arr, 5) << endl;
    cout << "Element found at " << BinarySearchR(arr.A, 5 , 0 , arr.length-1);
}
