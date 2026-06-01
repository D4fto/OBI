#include <iostream>

using namespace std;

struct node{
    int val;
    node *child;
};

void push(node *&s, int value){
    node *x = new node;
    x->val=value;
    x->child = s;
    s = x;
}
void pop(node *&s){
    if(s == NULL){
        return;
    }
    node *x = s->child;
    delete s;
    s = x;
}

int top(node *&s){
    if(s == NULL){
        return-1;
    }
    return s->val;
}

int main(){
    node *stack = NULL;

    cout << "Topo da pilha (esperado -1): " << top(stack) << endl;

    push(stack, 10);
    cout << "Topo da pilha (esperado 10): " << top(stack) << endl;

    push(stack, 20);
    cout << "Topo da pilha (esperado 20): " << top(stack) << endl;

    pop(stack);
    cout << "Topo após pop (esperado 10): " << top(stack) << endl;

    pop(stack);
    cout << "Topo após outro pop (esperado -1): " << top(stack) << endl;

    pop(stack); // tentativa de pop em pilha vazia
    cout << "Topo após pop em pilha vazia (esperado -1): " << top(stack) << endl;

    return 0;

    return 0;
}
