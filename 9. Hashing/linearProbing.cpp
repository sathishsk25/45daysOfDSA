#include<bits/stdc++.h>
#define size 10
using namespace std;

int Hash(int key){
    return key%size;
}

int probe(int H[],int key){
    int index=Hash(key);
    int i=0;
    while(H[(index+i)%size]!=0) i++;
    return (index+i)%size;
}

void insert(int H[], int key){
    int index = Hash(key);
    if(H[index]!=0)
    index = probe(H, key);
    H[index] = key;
}

int search(int H[], int key){
    int index = Hash(key);
    int i=0;
    while(H[(index+i)%size]!=key) i++;
    return (index+i)%size;
}


int main(){
int HT[size]={0};
insert(HT, 12);
insert(HT, 25);
insert(HT, 35);
insert(HT, 26);

cout << "key found at " << search(HT,25);
return 0;
}
