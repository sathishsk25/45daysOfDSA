#include<iostream>
#include<cstring>
using namespace std;

int main(){
  char A[]="decimal";
  char B[]="medical";

  int i,H[256]={0};

  for(i=0; A[i]!='\0'; i++){
      H[A[i]]+=1;
  }
  for(i=0; B[i]!='\0'; i++){
      H[A[i]]-=1;
      if(H[A[i]] < 0 ){
      cout << "Not an anagram";
      break;
      }
  }
  if(B[i]=='\0')
  cout << "Anagram";
}