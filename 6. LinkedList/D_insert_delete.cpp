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

void insert(struct Node *p, int pos, int x){
    struct Node *t;
    int i;

    if(pos<0 || pos>length(p)) return;
    if(pos==0){
        t = new Node;
        t->data = x;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else{
        t = new Node;
        for(i=0; i<pos-1; i++) p = p->next;
        t->data = x;
        t->prev = p;
        t->next = p->next;
        if(p->next) p->next->prev = t;
        p->next = t;
    }
}

int Delete(struct Node *p,int pos){
    int x;
    if(pos<0 || pos>length(p)) return -1;
    if(pos==1){
        p=first;
        first = first->next;
        x = p->data;
        delete p;
        if(first) first->prev = NULL;
    }
    else{
        for(int i=0; i<pos-1; i++) p = p->next;
        p->prev->next = p->next;
        if(p->next) p->next->prev = p->prev;
        x= p->data;
        delete p;
    }
    return x;
}

void Reverse(struct Node *p){
    struct Node *temp;
    p=first;
    while(p){
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p=p->prev;
        if(p->next==NULL && p!=NULL) first = p;
    }
}

int main(){
    int A[]={3,5,6,2,7};
    create(A,5);
    insert(first, 4, 1);
    display(first);
    Delete(first, 3);
    display(first);
    Reverse(first);
    display(first);
}