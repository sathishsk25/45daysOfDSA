#include<iostream>
using namespace std;

struct Stack{
    int size;
    int top;
    int *S;
};

void create(struct Stack *st){
    cout << "Enter size: ";
    cin >> st->size;
    st->top=-1;
    st->S = new int(st->size);
}

void display(struct Stack st){
    int i;
    for(i=st.top; i>=0; i--)
    cout << st.S[i] << " ";
    cout << endl;
}

void push(struct Stack *st, int x){
    if(st->top == st->size-1)
    cout << "Stack overflow";
    else{
        st->top++;
        st->S[st->top]=x;
    }
}

int pop(struct Stack *st){
    int x=-1;
    if(st->top == -1)
    cout << "Stack underflow";
    else{
        x = st->S[st->top--];
    }
    return x;
}

int main(){
    struct Stack st;
    create(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);

    display(st);
}
