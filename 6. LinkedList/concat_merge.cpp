#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;

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

void create2 (int A[], int n){
    struct Node *t, *last;
    second = new Node;
    second->data = A[0];
    second->next = NULL;
    last = second;

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

void concat(struct Node *p, struct Node *q){
    third=p;
    while(p->next!=NULL)
        p = p->next;
    p->next = q;
}

void merge(struct Node *p, struct Node *q){
    struct Node *last=NULL;
    if(p->data < q->data){
    third =p; last = p;
    p = p->next;
    third->next = NULL;
    }
    else{
    third = q;  last = q;
    q = q->next;
    third->next = NULL;
    }

    while(p && q){
        if(p->data < q->data){
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else{
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if(p) last->next = p;
    if(q) last->next = q;
}


int main(){
    int A[]= {1,10,20,30,40};
    int B[]= {6,12,18,24,34};
    create(A,5);
    create2(B,5);
    // concat(first,second);
    // Display(third);
    merge(first,second);
    Display(third);

}