#include <iostream>

using namespace std;

int main()
{
    //1. creating in stack
    int A[3][4]={{1,2,3,4},{4,5,6,7},{5,6,7,8}};
    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << A[i][j]<< " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    //2. creating partially in stack
    int *B[3];
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];
    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << B[i][j]<< " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    //3. creating entirely in stack
    
    int **C;
    C = new int*[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];
    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << C[i][j]<< " ";
        }
        cout << endl;
    }
    
    
}
