#include<iostream>
using namespace std;

double iterative(int x, int n){
    double s=1,num=1,den=1;
    for(int i=1; i<=n; i++){
        num *= x;
        den *= i;
        s += num/den;
    }
    
    return s;
}
double recursive(int x, int n){
    static double p=1,f=1;
    double r;
    if(n==0)
    return 1;
    else{
        r = recursive(x,n-1); 
        p = p*x;
        f = f*n;
        return r + p/f;
    }
}

double  recursiveH(int x, int n){
    static double s=1;
    if(n==0)
    return s;
    s = 1+x*s/n;
    return recursiveH(x,n-1);
}

int main(){
    int n=5;
    // cin >> n;
    cout << iterative(3,10) << endl;
    cout << recursive(3,10) << endl;
    cout << recursiveH(3,10);
}
