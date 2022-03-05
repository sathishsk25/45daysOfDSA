#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL;

void create (int A[], int n){
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i=1;i<n; i++){
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
int count(struct Node *p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}

void Display(struct Node *p){
    while(p!=NULL){
        cout << p->data << " ";
        p=p->next;
    }
}

int findMid(struct Node *p){
    struct Node *q;
    p=q=first;
    while(q){
        q=q->next;
        if(q)q=q->next;
        if(q)p=p->next;
    }
    return p->data;
}

int main(){
    int A[]= {3,5,7,10,15};
    create(A,5);
    Display(first);
    cout << "\nMid : " << findMid(first);
    
}
