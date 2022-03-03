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

void insert(struct Node *p, int pos, int x){
    struct Node *t;
    if(pos<0 || count(p)<pos)
    return;
    if(pos==0){
        t = new Node;
        t->data = x;
        t->next = first;
        first = t;
    }
    else if(p>0){
        p=first;
        for(int i=1; i<pos-1 && p ; i++)
        p=p->next;
        if(p){
            t = new Node;
            t->data = x;
            t->next = p->next;
            p->next = t;
        }
    }
}

void insertSorted(struct Node *p, int x){
    struct Node *t,*q;
    t= new Node;
    t->data = x;
    t->next = NULL;

    if(first==NULL) first = t;
    else{
        while(p!=NULL && p->data < x){
            q = p;
            p=p->next;
        }
            if(p==first){
                t->next = first;
                first = t;
            }
            else{
                t->next = q->next;
                q->next = t;
            }
    }
}


int main(){
    int A[]= {3,5,7,10,15};
    create(A,5);
    Display(first);
    // insert(first,3,8);
    insertSorted(first,8);
    cout << endl;
    Display(first);
    
}