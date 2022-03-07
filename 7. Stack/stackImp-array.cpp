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
        x = st->S[st->top];
        st->top--;
    }
    return x;
}

int peek(struct Stack st, int i){
 int x = -1;
 if(st.top-i+1<0)
 cout << "invalid index";
 else
 x = st.S[st.top-i+1];
 return x;
}

int isEmpty(struct Stack st){
    if(st.top==-1) return 1;
    else return 0;
}

int isFull(struct Stack st){
    if(st.top == st.size-1) return 1;
    else return 0;
}

int stackTop(struct Stack st){
    if(!isEmpty(st))
    return st.S[st.top];
    return -1;
}

int main(){
    struct Stack st;5
    create(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);

    cout << "Deleted ele : " << pop(&st) << endl;
    cout << "peek ele : " << peek(st,2) << endl;
    cout << "top ele : " << stackTop(st) << endl;
    display(st);
}
