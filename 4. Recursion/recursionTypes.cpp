#include<iostream>
using namespace std;

void tail(int n){
    if(n>0){
        cout << n << " ";
        tail(n-1);
    }
}

void head(int n){
    if(n>0){
        head(n-1);
        cout << n << " ";
    }
}


void tree(int n){
if(n>0){
    cout << n << " ";
    tree(n-1);
    tree(n-1);
}
}
void fn2(int n);
void fn1(int n){
    if(n>0){
        cout << n << " ";
        fn2(n-1);
    }
}
void fn2(int n){
    if(n>1){
        cout << n << " ";
        fn1(n/2);
    }
}
int nested(int n){
    if(n>100)
        return n-10;
    else
        return nested(nested(n+11));
}

int main(){
    int N = 5;
    tail(N);
    cout << endl;
    head(N);
    cout << endl;
    tree(N);
    cout << endl;
    fn1(20);
    cout << endl;
    int nest = nested(95);
}
