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

int Delete(struct Node *p, int pos){
    struct Node *q=first;
    int i,x=-1;
    if(pos<0 || count(p)<pos)
    return -1;
    if(pos==1){
        first = first->next;
        x = q->data;
        delete q;
        return x;
    }
    else if(p>0){
        p=first;
        for(int i=0; i<pos-1 && p ; i++){
            q=p;
            p=p->next;
        }
        if(p){
            q->next = p->next;
            x = p->data;
            delete p;
            return x;
        }
}
}



int main(){
    int A[]= {3,5,7,10,15};
    create(A,5);
    Display(first);
    Delete(first,3);
    cout << endl;
    Display(first);
    
}