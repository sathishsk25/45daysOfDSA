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

void NegativeOnLeft(struct Array *arr){
	int i=0,j=arr->length-1;
	while(i<j){
		while(arr->A[i]<0) i++;
		while(arr->A[j]>=0) j--;
		if(i<j)
		swap(arr->A[i],arr->A[j]);
	}
}

int main(){
    struct Array arr={{6,-8,14,-3,4,6,-15,-91},10,8};
    Display(arr);
    NegativeOnLeft(&arr);
	Display(arr);
}
