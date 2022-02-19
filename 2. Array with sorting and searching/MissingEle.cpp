#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int length;
};

//sorted sequential array starts with 1
int FindMissing1(struct Array arr){
	int sum =0,n=arr.A[arr.length-1];
	
	for(int i=0; i<arr.length; i++)
	sum += arr.A[i];
	int s = (n*(n+1))/2;
	cout << "1.Missing element: " << s-sum << endl;
}

//sorted sequential array starts with any number
int FindMissing2(struct Array arr){
	int diff=arr.A[0]-0,h=arr.A[arr.length-1];
	
	for(int i=0; i<arr.length; i++){
		if(arr.A[i]-i != diff){
			cout << "2.Missing element: " << diff+i<<endl;
			break;	
		}
	}
	
}

//missing more than 1 element
int FindMissing3(struct Array arr){
	int diff=arr.A[0]-0,n=arr.length;
	int l=arr.A[0],h=arr.A[arr.length-1];
	cout << "3.Missing element: ";
	for(int i=0; i<arr.length; i++){
		if(arr.A[i]-i != diff){
			while(diff<arr.A[i]-i){
			cout << diff+i << " ";
			diff++;	
		}
	}
}
}

int main(){
    struct Array arr1={{1,2,3,4,5,6,8,9,10,11},10};
    struct Array arr2={{6,7,8,9,10,11,13,14,15,16},10};
    struct Array arr3={{6,7,8,9,11,12,15,16,17,18},10};

   	FindMissing1(arr1);
   	FindMissing2(arr2);
   	FindMissing3(arr3);
   	
}
