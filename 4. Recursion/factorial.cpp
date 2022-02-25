#include<iostream>
using namespace std;

int recursive(int n){
    if(n==0)
    return 1;
    return recursive(n-1) * n;
}

int iterative(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n=5;
    // cin >> n;
    int res1 = recursive(n);
    int res2 = iterative(n);

    cout << res1 << endl << res2;
}