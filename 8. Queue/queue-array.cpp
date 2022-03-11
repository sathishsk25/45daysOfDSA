#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = new int(q->size);
}

void enqueue(struct Queue *q, int x)
{
    if (q->size - 1 == q->rear)
        cout << "Queue is full";
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int dequeue(struct Queue *q)
{
    int x = -1;
    if (q->front == q->rear)
        cout << "Queue is Empty";
    else
    {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}

void display(struct Queue q)
{
    int i;
    for (i = q.front + 1; i <= q.rear; i++)
        cout << q.Q[i] << " ";
    cout << endl;
}

int main()
{
    struct Queue q;
    create(&q, 5);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(q);
    cout << "Deleted ele : " << dequeue(&q) << endl;
    display(q);
    return 0;
}
