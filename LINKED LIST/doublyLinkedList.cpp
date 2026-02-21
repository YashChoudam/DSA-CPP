#include<iostream>
using namespace std ;

class Node{
public:
    int data ;
    Node* next ;
    Node* previous ;

    Node(int val){
        data = val ;
        next = NULL ;
        previous = NULL ;
    }
};

class List{
public:
    Node* head ; 
    Node* tail ;

    List(){
        head = tail = NULL ;
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode ;
        }else{
            newNode->next = head ;
            head->previous = newNode ;
            head = newNode ;
        }
        
    }
    void pop_front(){
        if (head == NULL)
        {
            cout << "Empty List " << endl;
            return ;
        }
        
        Node* temp = head->next ;
        head->next = NULL ;
        temp->previous = NULL ;
        head = temp ;
    }
    void printLL(){
        Node* temp = head ;
        while (temp != NULL)
        {
            cout << temp->data << " " ;
            if (temp->next != NULL)
            {
                cout << " <=> " ;
            }
            temp = temp->next ;
        }
        cout << endl ;
    }
};

int main()
{
    List ll ;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);

    ll.printLL();
    ll.pop_front();
    ll.printLL();
    return 0 ;
} 