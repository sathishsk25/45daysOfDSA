#include<iostream>
using namespace std;

template<class type>
class Array{
	
	private:
		type *A;
		type size;
		type length;
	
	public:
		
		Array(){
			size = 10;
			length = 0;
			A = new int[size];
		}
		Array(type sz){
			size = sz;
			length = 0;
			A = new type[size];
		}
		~Array(){
			delete []A;
		}
		
		void Display();
		void Insert(type ele,int ind);
		type Delete(int ind);
};
template<class type>
void Array<type>::Display(){
	for(int i=0; i<length; i++)
	cout << A[i] << " ";
	cout << endl;
}
template<class type>
void Array<type>::Insert(type ele, int ind){
	if(ind>=0 && ind<=size){
		for(int i=length-1; i>=ind; i++){
			A[i+1] = A[i];
		}
		A[ind]=ele;
		length++;
	}
}
template <class type>
type Array<type>::Delete(int ind){
	type x = 0;
	if(ind>=0 && ind<=size){
		x = A[ind];
		for(int i=ind; i<length; i++){
			A[i] = A[i+1];
		}
		length--;
	}
	return x;
}

int main(){
	Array<int> arr;
	arr.Insert(1,0);
	arr.Insert(2,1);
	arr.Insert(3,2);
	arr.Display();
	cout << "Deleted element : ";
	cout << arr.Delete(1) << endl;
	arr.Display();
	
	
}
