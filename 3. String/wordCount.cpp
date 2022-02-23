#include<iostream>
#include<cstring>
using namespace std;
int main(){
  char *str;
  gets(str);
int i,words=1;
  for(i=0;str[i]!='\0'; i++){
      if(str[i]==' ' && str[i-1]!=' ')
      words++;
  }
  cout << words;
}
