#include <iostream>
#include <iterator>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        next = NULL;
        data = val;
    }
};

class List
{
public:
    Node *head;
    Node *tail;

    List()
    {
        head = NULL;
        tail = NULL;
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val); // Dynamic memory location

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printLL()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data;
            if (temp->next != NULL)
            {
                cout << " -> ";
            }
            temp = temp->next ;
        }
        cout << endl;
    }
};

Node* splitAtMid(Node* head){
    Node* slow = head ;
    Node* fast = head ;
    Node* previous = NULL ;

    while (fast != NULL && fast->next != NULL)
    {
        previous = slow ;
        slow = slow->next;
        fast = fast->next->next;
    }
    previous->next = NULL ;
    return slow ;
}

Node* reverseLL(Node* head){
    Node* current = head ;
    Node* previous = NULL ;
    while (current != NULL)
    {
        Node* next = current->next ;
        current->next = previous ;

        previous = current ;
        current = next ;
    }
    return previous ;
}

Node* zigZag(Node* head){
    Node* rightHead = splitAtMid(head);
    Node* rightReverse =  reverseLL(rightHead);

    // Alternate merging 1st head = head , 2nd head = rightReverse
    Node* left = head ;
    Node* right = rightReverse ;
    Node* tail = NULL ;
    while (left != NULL && right != NULL)
    {
        Node* nextLeft = left->next ; 
        Node* nextRight = right->next ;
        
        left->next = right ;
        right->next = nextLeft ;
        tail = right ;

        left = nextLeft ;
        right = nextRight ;
    }
    if(right != NULL ){
        tail->next = right ;
    }

    return head ;
}

int main()
{
    List ll ;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

    ll.printLL();

    ll.head = zigZag(ll.head);
    ll.printLL();
    return 0 ;
}