#include<iostream>
using namespace std;

int recursive(int n){
    if(n==0)
    return 0;
    return recursive(n-1) + n;
}

int iterative(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}
int main(){
    int n=5;
    // cin >> n;
    int res1 = recursive(n);
    int res2 = iterative(n);

    cout << res1 << endl << res2;
}