#include<iostream>
using namespace std;
#define SIZE 10 

class Stack{
    int stack[SIZE] ;
    int topIdx ;

public:
    Stack(){
        topIdx = -1 ;
    }

    bool isEmpty(){
        return (topIdx == -1) ;
    }

    bool isFull(){
        return (topIdx == SIZE - 1); 
    }
    
    void push(int val){
        if(isFull()){
            cout << "Stack is full " << endl;
            return;
        }
        stack[++topIdx] = val ;
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack is empty" << endl ;
            return ;
        }
        topIdx--;
    }
    int top(){
        if (isEmpty())
        {
            cout << "Stack is empty " << endl ;
            return -1;
        }
        
        return stack[topIdx];
    }
};

int main(){
    Stack stack ;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    while (!stack.isEmpty())
    {
        cout << stack.top() << "  " ;
        stack.pop();
    }
    cout << endl ;
    return 0 ;
}