#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*Head=NULL;

void create(int A[],int n)
{
    int i;
    struct Node *last,*t; 
    Head = new Node;
    Head->data = A[0];
    Head->next = Head;
    last=Head;

    for(int i=1; i<n; i++){
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void display(struct Node *h){
    do{
        cout << h->data << " ";
        h = h->next;
    }while(h!=Head);
    cout << endl;
}

void insert(int pos, int x){
    struct Node *t, *p;
    int i;
    if(pos==0){
        t = new Node;
        t->data = x;

        if(Head==NULL){
            Head = t;
            Head->next = Head;
        }
        else{
            p = Head;
            while(p->next!=Head)
            p = p->next;
            p->next = t;
            t->next = Head;
            Head=t;
        }
    }
    else{
        p=Head;
        for(i=0; i<pos-2; i++)
        p = p->next;
        t = new Node;
        t->data = x;
        t->next=p->next;
        p->next=t;
    }
}

int Delete(struct Node *p, int pos){
    struct Node *q;
    int i,x;
    if(pos==1){
        while(p->next != Head)
        p = p->next;
        x = Head->data;
        if(Head==p){
            delete Head;
            Head = NULL;
        }
        else{
            p->next =  Head->next;
            delete Head;
            Head = p->next;
        }
    }
    else{
        for(i=0; i<pos-2; i++)
            p=p->next;
        q=p->next;
        p->next = q->next;
        x=q->data;
        delete q;
    }
    return x;
}

int main(){
    int A[]={2,3,4,5,6};
    create(A,5);
    display(Head);
    cout <<"Deleted element:" << Delete(Head,2) << endl;
    display(Head);
    insert(3,8);
    display(Head);
}
