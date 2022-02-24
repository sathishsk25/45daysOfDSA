#include<iostream>
#include<cstring>
using namespace std;

int main(){
  char A[]="sathish";
  long int H=0,X=0;
  for(int i=0; A[i]!='\0'; i++){
    X = 1;
    X = X << A[i]-97;
    if((X&H) > 0){
    cout << "Duplicate";
    return 0;
    }
    else
    H = X|H; 
  }
  cout << "No Duplicates";
}