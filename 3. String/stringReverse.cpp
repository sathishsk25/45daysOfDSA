#include<iostream>
#include<cstring>
using namespace std;
int main(){
  char str[100],rev[100];
  cin >> str;
  
  int i,j=0;
  
  for(i=0; str[i]!='\0'; i++){}
  i -= 1;
  
//   for(j=0; i>=0; i--,j++){
//       rev[j] = str[i];
//   }
//   rev[j]='\0';
//   cout << rev;

for(j=0; i>j; i--,j++){
    int temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}

cout << str;
}
