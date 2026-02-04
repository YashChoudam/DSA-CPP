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
        data = val;
        next = NULL;
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

    void push_Back(int val)
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
        cout << endl ;
    }

    void insertInMiddle(int val, int position)
    {
        Node *newNode = new Node(val);
        Node *temp = head;
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }

        if (position == 0)
        {
            newNode->next = head;
            head = newNode;
            return;
        }

        for (int i = 0; i < position - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Position is Invalid " << endl;
                delete newNode;
                return;
            }

            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "Linked list is empty " << endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
};
Node* splitAtMid(Node* head){
    Node* slow = head ;
    Node* fast = head ;
    Node* previous = NULL ;
    while (fast != NULL && fast->next != NULL)
    {
        previous = slow ;
        slow = slow->next ;
        fast = fast->next->next;
    }
    if (previous != NULL)
    {
        previous->next = NULL ;
    }
    return slow ;
}

Node* reverse(Node* head){
    Node *current = head ;
    Node *previous = NULL ;
    Node* next = NULL ;
    while (current != NULL)
    {
        next = current->next;
        current->next = previous ;

        previous = current ;
        current = next ;
    }
    return previous ;
}
void zigZagLL(Node* head){
    Node* rightHead = splitAtMid(head); 
    Node* reversedRightHead = reverse(rightHead);

    // alternate merging of this two lists 1st head = head 2nd head = reversedRigtHead 
}
int main()
{

}