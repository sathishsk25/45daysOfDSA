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

int checkLoop(struct Node *f)
{
    struct Node *p, *q;
    p = q = f;
    do{
        q=q->next;
        p=p->next;
        p = (p)?p->next:p;
    }while(p && q && p!=q);

    if(p==q) return 1;
    else return 0;
}

int main(){
    int A[]= {1,10,20,30,40};
    create(A,5);
    struct Node *t1 = first->next->next;
    struct Node *t2 = first->next->next->next->next;
    t2->next = t1;
    cout << checkLoop(first);
}
