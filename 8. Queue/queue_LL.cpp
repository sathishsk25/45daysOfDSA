#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    struct Node *t;
    t = new Node;
    if (t == NULL)
        cout << "Queue is Full\n";
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
            rear->next = t;
        rear = t;
    }
}

int dequeue()
{
    int x = -1;
    struct Node *t;
    if (front == NULL)
        cout << "Queue is empty \n";
    else
    {
        x = front->data;
        t = front;
        front = front->next;
        delete t;
    }
    return x;
}

void display()
{
    struct Node *p = front;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(60);
    enqueue(80);
    enqueue(40);

    display();
    cout << "Deleted ele : " << dequeue() << endl;
    display();
    return 0;
}
