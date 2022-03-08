#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x){
    struct Node *t;
    t= new Node;

    if(t==NULL)
    cout << "Stack is full\n";
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop(){
    struct Node *t;
    int x=-1;
    if(top==NULL)
    cout << "stack is empty";
    else{
        t=top;
        top=top->next;
        x=t->data;
        delete t;
    }
    return x;
}

void display(){
    struct Node *p;
    p = top;
    while(p!=NULL){
    cout << p->data << " ";
    p=p->next;
    }
    cout << endl;
}

int main(){
    push(1);
    push(2);
    push(3);
    display();
    cout <<"deleted ele: " << pop() << endl;
    display();
}
