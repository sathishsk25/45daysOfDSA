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
    while(p!=0){
        cout << p->data << " ";
        p=p->next;
    }
}

void remDuplicate(struct Node *p){
    struct Node *q = p->next;
    while(q != NULL){
    if(p->data != q->data){
        p = q;
        q = q->next;
    }
    else{
        p->next = q->next;
        delete q;
        q = p->next; 
    }
    }
}

int main(){
    int A[]= {3,3,7,10,10};
    create(A,5);
    Display(first);
    remDuplicate(first);
    cout << endl;
    Display(first);
    
}