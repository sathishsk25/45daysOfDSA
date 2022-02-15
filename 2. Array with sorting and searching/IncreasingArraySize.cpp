#include <iostream>

using namespace std;

int main()
{
    int *p = new int[5];
    p[0]=2; p[1]=3; p[2]=4; p[3]=6; p[4]=1; 
    for(int i=0; i<5; i++)
    cout << p[i] << " ";
    cout << endl;
    
    //Creating new pointer for shifting p ele to q
    int *q = new int[10];
    for(int i=0; i<5; i++)
    q[i] = p[i];

    //deleting the arr p inorder to prevent memory leak 
    delete []p;
    p = q;
    q = NULL;
    
    for(int i=0; i<5; i++)
    cout << p[i] <<" ";
    return 0;
}
