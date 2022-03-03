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

Node* Lsearch(struct Node *p, int key){ 
    while(p!=0){
        if(p->data == key)
        return p;
        p = p->next;
    }
    return NULL;
}

Node* Rsearch(struct Node *p, int key){ 
    
    if(p==NULL)
    return NULL;

        if(p->data == key)
        return p;
        return Rsearch(p->next,key);
}

//improved-moving returned key value to the head
Node* HSearch(struct Node *p, int key){ 
    struct Node *q=NULL;
    while(p!=0){
        if(p->data == key){
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}

int main(){
    int A[] = {3,5,7,10,15};
    create(A,5);
    cout << Lsearch(first, 7) << endl;
    cout << Rsearch(first, 10) << endl;
    Display(first);
    cout << endl << HSearch(first , 5) << endl;
    Display(first);
}