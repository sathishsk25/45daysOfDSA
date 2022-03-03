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

//reversing the elements
void revEle(struct Node *p){
    int *A = new int[count(p)];
    int i=0;

    while(p!=NULL){
        A[i++] = p->data;
        p = p->next;
    }
    p=first;
    i--;
    while(p!=NULL){
        p->data = A[i--];
        p = p->next;
    }
}

//reversing the links

void revLink(struct Node *p){
    struct Node *q=NULL,*r=NULL;
    while(p!=NULL){
        r = q; q = p; p = p->next;
        q->next = r;
    }
    first = q;
}

//reversing the links using recursion

void revRec(struct Node *q, struct Node *p){
    if(p!=NULL){
        revRec(p,p->next);
        p->next = q;
    }
    else
    first = q;
}

int main(){
    int A[]= {3,3,7,10,10};
    create(A,5);
    Display(first);
    // revEle(first);
    // revLink(first);
    revRec(NULL, first);
    cout << endl;
    Display(first);
    
}