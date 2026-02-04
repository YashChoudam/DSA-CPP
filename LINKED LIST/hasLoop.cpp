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

    bool isCycle()
    {
        Node *slow = head;
        Node *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                return true;
            }
        }
        return false;
    }
    bool removeCycle()
    {
        Node *slow = head;
        Node *fast = head;
        bool isCycle = false;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                isCycle = true;
                break;
            }
        }

        if (!isCycle)
        {
            cout << "No cycle found ";
            return;
        }

        slow = head;
        if (slow == head)
        {
            while (fast->next != slow)
            {
                fast = fast->next;
            }
            fast->next = NULL;
        }
        else
        {
            Node *previous = fast;
            while (slow != fast)
            {
                slow = slow->next;
                previous = fast;
                fast = fast->next;
            }
            previous->next = NULL;
        }
    }
};
