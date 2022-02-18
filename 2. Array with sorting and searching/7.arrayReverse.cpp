#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size; 
    int length;
};

int Display(struct Array arr){
	for(int i=0; i<arr.length; i++)
	cout << arr.A[i] << " ";
	cout << endl;
}

void swap(int *x, int *y){
    int temp = *y;
    *y  = *x;
    *x = temp;
}


void ReverseArr(struct Array *arr){
	int *B = new int[5];
	for(int i=arr->length-1,j=0; i>=0; i--,j++)
	B[j] = arr->A[i];
	
	for(int i=0; i<arr->length; i++)
	arr->A[i] = B[i];
	
}

void ReverseArr2(struct Array *arr){
	int i,j;
	for(i=0,j=arr->length-1; i<j; i++,j--){
		swap(arr->A[i], arr->A[j]);
	}
}
int main(){
    struct Array arr={{6,3,4,5,9},10,5};
    ReverseArr(&arr);
    cout << "Reversesd Array : ";
	Display(arr);
	ReverseArr2(&arr);
  	cout << "Reversesd Array : ";
	Display(arr);
}
