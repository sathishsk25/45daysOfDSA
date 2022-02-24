#include<iostream>
using namespace std;

int func1(int n){
    if(n>0){
        cout << n << " ";
        func1(n-1);
    }
}

int func2(int n){
    if(n>0){
        func2(n-1);
        cout << n << " ";
    }
}

int main(){
    int N = 5;
    func1(N);
    cout << endl;
    func2(N);
}
