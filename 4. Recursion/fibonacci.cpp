#include<iostream>
using namespace std;

int  fibR(int n){
    if(n<=1)
    return n;
    else
    return fibR(n-2) + fibR(n-1);
}

int fibI(int n){
    int t0=0,t1=1,sum=0;
    if(n<=1)
    return n;

    for(int i=2; i<=n; i++){
        sum = t0 + t1;
        t0 = t1; 
        t1 = sum;
    }

    return sum;
}

int F[10]; 

int fibM(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2] == -1)
        F[n-2] = fibM(n-2);
        if(F[n-1] == -1)
        F[n-1] = fibM(n-1);
        return F[n-2] + F[n-1];
    }
}

int main(){
    int n=6;

    for(int i=0; i<n; i++)
    F[i] = -1;
    // cin >> n;
    cout << fibR(n);
    cout << endl << fibI(n);
    cout << endl << fibM(n);
}
