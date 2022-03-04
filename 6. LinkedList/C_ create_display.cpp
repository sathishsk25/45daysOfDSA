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

int display(struct Node *h){
    do{
        cout << h->data << " ";
        h = h->next;
    }while(h!=Head);
}

int main(){
    int A[]={2,3,4,5,6};
    create(A,5);
    display(Head);
}
