#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n){
    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i=1; i<n; i++){
        t=new Node;
        t->data=A[i];
        t->next = NULL;
        last->next = t; 
        last = t;
    }
}

void Display(struct Node *p){
    while(p!=NULL){
        cout << p->data << " ";
        p=p->next;
    }
}

void RDisplay(struct Node *p){
    if(p!=0){
        cout << p->data << " ";
        RDisplay(p->next);
    }
}
int main(){
    int A[] = {3,5,7,10,15};
    create(A,5);
    RDisplay(first);
}
