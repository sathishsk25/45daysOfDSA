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

void Insert(struct Array *arr,int x){
	int i = arr->length-1;
	while(arr->A[i] > x){
		arr->A[i+1]= arr->A[i];
		i--;
	}
	arr->A[i+1] = x;
	arr->length++;
}
int main(){
    struct Array arr={{6,8,14,15,91},10,5};
    Display(arr);
   	Insert(&arr,10);
   	Display(arr);
	
}
