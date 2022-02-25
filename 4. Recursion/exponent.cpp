#include<iostream>
using namespace std;

int exp1(int m,int n){
    if(n==0)
    return 1;
    return exp1(m,n-1)*m;
}

int exp2(int m,int n){
    if(n==0)
    return 1;
    else if(n%2==0)
    return exp1(m*m,n/2);
    else
    return m*exp2(m*m,(n-1)/2);
}

int main(){
    int m=2,n=9;
    // cin >> m >> n;
    int res1 = exp1(m,n);
    int res2 = exp2(m,n);

    cout << res1 << endl << res2;
}