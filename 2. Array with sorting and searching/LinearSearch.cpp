#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size; 
    int length;
};

void swap(int *x, int *y){
    int temp = *y;
    *y  = *x;
    *x = temp;
}

int LinearSearch(struct Array arr, int key){
    int i=0;
    for(i=0; i<arr.length; i++){
        if(arr.A[i] == key)
        return i;
    }
    return -1;
}

int LinearSearchImp(struct Array *arr, int key){
    int i=0;
    for(i=0; i<arr->length; i++){
        if(arr->A[i] == key){
            swap(arr->A[i],arr->A[i-1]);
            return i-1;
        }
    }
    return -1;
}

int main(){
    struct Array arr={{6,3,4,5,9},10,5};
    cout << "Element found at " << LinearSearch(arr, 5) << endl;
    cout << "Element found at " << LinearSearchImp(&arr, 5);
}