#include<iostream>
using namespace std;

struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL;

void create (int A[],int n){
    struct Node *t,*last;
    int i;
    first = new Node;
    first->data = A[0];
    first->prev=first->next = NULL;
    last = first;

    for(i=1; i<n; i++){
        t = new Node;
        t->data=A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p){
    while(p){
        cout << p->data << " ";
        p= p->next;
    }
    cout << endl;
}

int length(struct Node *p){
    int len=0;
    while(p){
        len++;
        p = p->next;
    }
    return len;
}


int main(){
    int A[]={3,5,6,2,7};
    create(A,5);
    cout <<"Length: "<< length(first) << endl;
    display(first);
}