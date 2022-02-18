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

struct Array* Union(struct Array *arr1, struct Array *arr2){
	int i=0,j=0,k=0;
	struct Array *arr3 = new struct Array[10];
	while(i<arr1->length && j<arr2->length){
		if(arr1->A[i] < arr2->A[j])
		arr3->A[k++] = arr1->A[i++];
		else if(arr1->A[i]>arr2->A[j])
		arr3->A[k++] = arr2->A[j++];  
		else{
		arr3->A[k++] = arr2->A[i++]; j++;
		}
	}
	for(; i<arr1->length; i++)
	arr3->A[k++] = arr1->A[i++];
	for(; j<arr2->length; j++)
	arr3->A[k++] = arr2->A[j++];
	arr3->length = k;
	arr3->size = 10;
	return arr3;
}

struct Array* Intersection(struct Array *arr1, struct Array *arr2){
	int i=0,j=0,k=0;
	struct Array *arr3 = new struct Array[10];
	while(i<arr1->length && j<arr2->length){
		if(arr1->A[i] < arr2->A[j])
		i++;
		else if(arr1->A[i]>arr2->A[j])
		j++;  
		else{
		arr3->A[k++] = arr2->A[i++]; j++;
		}
	}

	arr3->length = k;
	arr3->size = 10;
	return arr3;
}

struct Array* Difference(struct Array *arr1, struct Array *arr2){
	int i=0,j=0,k=0;
	struct Array *arr3 = new struct Array[10];
	while(i<arr1->length && j<arr2->length){
		if(arr1->A[i] < arr2->A[j])
		arr3->A[k++] = arr1->A[i++];
		else if(arr1->A[i]>arr2->A[j])
		j++;  
		else{
		i++; j++;
		}
	}
	for(; i<arr1->length; i++)
	arr3->A[k++] = arr1->A[i++];
	
	arr3->length = k;
	arr3->size = 10;
	return arr3;
}
int main(){
    struct Array arr1={{3,8,16,20,25},10,5};
    struct Array arr2={{4,8,12,20,23},10,5};
    struct Array *arr3;
    
    cout << "arr1 : ";
	Display(arr1);
    cout << "arr2 : ";
	Display(arr2);
    arr3 = Union(&arr1,&arr2);
    cout << "union : ";
	Display(*arr3);
	arr3 = Intersection(&arr1,&arr2);
	cout << "Intersection : ";
	Display(*arr3);
	arr3 = Difference(&arr1,&arr2);
	cout << "Difference : ";
	Display(*arr3);
}
