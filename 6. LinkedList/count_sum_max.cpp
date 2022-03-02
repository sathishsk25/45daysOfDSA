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

int count(struct Node *p){
    int c=0;
    while(p!=0){
    c++;
    p=p->next;
    }
    return (c);
}
int Rcount(struct Node *p){
    if(p==0)
    return 0;
    else 
    return 1 + Rcount(p->next);
}
int sum(struct Node *p){
    int s=0;
    while(p!=0){ 
        s += p->data;
        p = p->next;
    }
    return s;
}

int Rsum(struct Node *p){
    if(p==0)
    return 0;
    else
    return p->data + Rsum(p->next);
}

int max(struct Node *p){
    int max = INT_MIN;
    while(p!=0){
        if(max < p->data)
        max = p->data;
        p = p->next;
    }
    return max;
}
int Rmax(struct Node *p){
    int x;
    if(p==0)
    return INT_MIN;

    x = Rmax(p->next);
    if (x > p->data)
    return x;
    else
    return p->data;
}

int main(){
    int A[] = {3,5,7,10,15};
    create(A,5);
    cout << " RCount : "<< Rcount(first);
    cout << "\n RSum : " << Rsum(first);
    cout << "\n RMax : " << Rmax(first);
}
