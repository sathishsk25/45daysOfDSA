#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size; 
    int length;
};


int checkSorted(struct Array arr){
	for(int i=0; i<arr.length-1; i++){
		if(arr.A[i] > arr.A[i+1])
		return false;
	}
	return true;
}
int main(){
    struct Array arr={{6,8,14,15,91},10,5};
    if(checkSorted(arr))
	cout << "Array is Sorted";
	else 
	cout << "Array is not Sorted";
	
}
