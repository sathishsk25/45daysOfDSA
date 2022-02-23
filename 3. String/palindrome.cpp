#include<iostream>

using namespace std;
int main(){
  char str[100],rev[100];
  cin >> str;
  
  int i,j=0;
  
  for(i=0; str[i]!='\0'; i++){}
  i -= 1;
  
  for(j=0; i>=0; i--,j++){
      rev[j] = str[i];
  }
  rev[j]='\0';
 
int flag =1;
for(i=0; str[i]!='\0' && rev[i]!='\0';i++){
    if(str[i]!=rev[i])
    flag = 0;
}
if(flag)
cout << "Palindrome";
else
cout << "Not a Palindrome";
}
