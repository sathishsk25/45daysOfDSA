#include<iostream>
#include<cstdlib>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr){
    cout << "Array elements :  ";
    for(int i=0; i<arr.length; i++)
    cout << arr.A[i] << " ";
    cout << endl;
}

void Append(struct Array *arr , int x){
    if(arr->length < arr->size){
        arr->A[arr->length++] = x;
    }
}
void Insert(struct Array *arr, int index, int x){\
    int ele = x;
    if(index >=0 && index <= arr->length){
        for(int i=arr->length; i>index; i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }
    cout << "Inserted element : " << ele << endl;
}
int Delete(struct Array *arr, int index){
    int ele = arr->A[index];
    if(index >= 0 && index <= arr->length){
        for(int i=index; i<arr->length; i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        cout << "Deleted element: " << ele << endl;
    }
    return ele;
}

int main (){
    struct Array arr;

    cout << "Enter the size of an array : ";
    cin >> arr.size;
    arr.A = new int(arr.size);
    arr.length = 0;
    int n;

    cout << "Enter the no.of numbers : ";
    cin >> n;
    arr.length = n;
    cout << "Enter array elements :  \n";
    for(int i=0; i<n; i++)
    cin >> arr.A[i];

Display(arr);

Delete(&arr,2);
Display(arr);

Insert(&arr,1,5);
Display(arr);

Append(&arr,6);
Display(arr);



}
