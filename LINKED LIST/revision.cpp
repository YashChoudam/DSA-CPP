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

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
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

    ~List()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);

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

    void pop_back()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "Linked list is empty no node to pop " << endl;
            return;
        }
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "Linked list is empty no node to pop " << endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void insertAtIndex(int val, int index)
    {
        Node *newNode = new Node(val);
        Node *temp = head;
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        if (index == 0)
        {
            newNode->next = head;
            head = newNode;
            return;
        }
        for (int i = 0; i < index - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "position is Invalid " << endl;
                delete newNode;
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        if (newNode->next == NULL)
        {
            tail = newNode;
        }

        temp->next = newNode;
    }

    void pop_Index(int index)
    {
        if (head == NULL)
        {
            cout << "Linked list is empty no node to pop " << endl;
            return;
        }

        if (index == 0)
        {
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
            if (head == NULL)
                tail = NULL;
            return;
        }
        Node *previous = head;
        for (int i = 0; i < index - 1; i++)
        {
            if (previous->next == NULL)
            {
                cout << "Position does not exist" << endl;
                return;
            }
            previous = previous->next;
        }
        Node *toDelete = previous->next;
        previous->next = previous->next->next;
        toDelete->next = NULL;
        delete toDelete;
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
};
int main()
{
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(0);
    // ll.push_Back(4);
    // ll.push_Back(5);
    // ll.push_Back(6);
    ll.insertAtIndex(100, 2);
    ll.printLL();
    // ll.pop_back();
    ll.pop_Index(1);
    cout << endl;
    ll.printLL();
    return 0;
}