#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }

    ~Node(){
        if (next != NULL)
        {
            delete next ;
            next = NULL ;
        }
        
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    ~List(){
        if (head != NULL)
        {
            delete head ;
            head = NULL ;
        }
        
    }

    void pushFront(int val)
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

    void pushBack(int val)
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

            temp = temp->next;
        }
    }

    void insertInMiddle(int val, int position)
    {
        Node *newNode = new Node(val);
        Node *temp = head ;
        if (head == NULL)
        {
            head = tail = newNode;
            return ;
        }

        if (position == 0)
        {
            newNode -> next = head ;
            head = newNode ;
            return ;
        }
        
        for (int i = 0; i < position - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Position is Invalid " << endl;
                delete newNode ;
                return;
            }

            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
};

int main()
{
    List ll;

    ll.pushFront(3);
    ll.pushFront(2);
    ll.pushFront(1);
    ll.pushFront(0);
    ll.pushBack(4);
    ll.pushBack(5);
    ll.pushBack(6);
    
    ll.insertInMiddle(100,2);
    ll.printLL();
    return 0;
}