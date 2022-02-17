#include <iostream>

using namespace std;

struct Array{
  int A[10];
  int size;
  int len;
};

int Display(struct Array arr){
    for(int i=0; i<arr.len; i++){
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

int Get(struct Array arr, int index){
    if(index >=0 && index <=arr.len)
    cout << arr.A[index] << endl;
}

void Set(struct Array *arr, int index,int  x){
     if(index >=0 && index <=arr->len)
     arr->A[index] = x;
} 

int Max(struct Array arr){
    int max = arr.A[0];
    for(int i=1; i<arr.len; i++){
        if(arr.A[i] > max)
        max = arr.A[i];
    }
    cout << max << endl; 
}

int Min(struct Array arr){
    int min = arr.A[0];
    for(int i=1; i<arr.len; i++){
        if(arr.A[i] < min)
        min = arr.A[i];
    }
    cout << min << endl; 
}

int Sum(struct Array arr){
    int sum = 0;
    for(int i=0; i<arr.len; i++){
        sum += arr.A[i];
    }
    cout << sum << endl; 
}

int SumR(struct Array arr, int n){
    if(n<0)
    return 0;
    else
    return SumR(arr, n-1) + arr.A[n];
}

float Avg(struct Array arr){
    int sum = 0;
    for(int i=0; i<arr.len; i++){
        sum += arr.A[i];
    }
    float avg = (float)sum/arr.len;
    cout << avg << endl; 
}

int main()
{
    struct Array arr={{2,4,7,3,9},10,5};
    Display(arr);  
    Get(arr,2);
    Set(&arr, 4, 8);
    Display(arr);
    Max(arr);
    Min(arr);
    Sum(arr);
    cout << SumR(arr,arr.len) << endl;
    Avg(arr);
}
