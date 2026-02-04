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
    Node *head;
    Node *tail;

public:
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

    void pop_atIndex(int position)
    {
        if (head == NULL)
        {
            cout << "Empty List" << endl;
            return;
        }

        if (position == 0)
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
        for (int i = 0; i < position - 1; i++)
        {
            if (previous->next == NULL)
            {
                cout << "Position does not exist" << endl;
                return;
            }
            previous = previous->next;
        }

        Node *toDelete = previous->next;
        if (toDelete == NULL)
            return;

        previous->next = toDelete->next;

        if (toDelete == tail)
            tail = previous;

        toDelete->next = NULL;
        delete toDelete;
    }
    int searchItr(int key)
    {
        Node *temp = head;
        int index = 0;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return index;
            }
            else
            {
                temp = temp->next;
                index++;
            }
        }
        return -1;
    }

    int helper(Node *temp, int key)
    {
        if (temp == NULL)
        {
            return -1;
        }
        if (temp->data == key)
        {
            return 0;
        }
        int index = helper(temp->next, key);
        if (index == -1)
        {
            return -1;
        }
        return index + 1;
    }
    int searchRecursive(int key)
    {
        return helper(head, key);
    }

    void reverseLinkedList()
    {
        Node *current = head;
        Node *previous = NULL;
        tail = head;
        while (current != NULL)
        {
            Node *next = current->next;
            current->next = previous;

            // Updation for the next iterations
            previous = current;
            current = next;
        }
        head = previous;
    }
    int getSize()
    {
        int size = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            size++;
        }
        return size;
    }
    void removeNthFromEnd(int n)
    {
        int size = getSize();

        Node *previous = head;
        for (int i = 1; i < (size - n); i++) // i = size - n => previous will have the node previous from the node we want to delete
        {
            previous = previous->next;
        }
        previous->next = previous->next->next;
    }
};

int main()
{
    List ll;

    ll.push_Back(1);
    ll.push_Back(2);
    ll.push_Back(3);
    ll.push_Back(4);
    ll.push_Back(5);
    ll.push_Back(6);
    ll.printLL();
    cout << endl;
    // cout << "Position of key : " << ll.searchItr(3) << endl;
    // cout << "Position of key : " << ll.searchRecursive(4) << endl;
    ll.reverseLinkedList();
    ll.printLL();
    cout << endl;
    return 0;
}