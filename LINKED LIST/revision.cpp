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
};

Node *splitAtMid(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    Node *previous = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        previous = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (previous != NULL)
    {
        previous->next = NULL;
    }

    return slow;
}
Node *merge(Node *leftHead, Node *rightHead)
{
    List ans;
    Node *i = leftHead;
    Node *j = rightHead;

    while (i != NULL && j != NULL)
    {
        if (i->data < j->data)
        {
            ans.push_back(i->data);
            i = i->next;
        }
        else
        {
            ans.push_back(j->data);
            j = j->next;
        }
    }
    while (i != NULL)
    {
        ans.push_back(i->data);
        i = i->next;
    }
    while (j != NULL)
    {
        ans.push_back(j->data);
        j = j->next;
    }
    return ans.head ;
}
Node *mergeSort(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *rightHead = splitAtMid(head);
    Node *left = mergeSort(head);
    Node *right = mergeSort(rightHead);

    return merge(left, right);
}
int main()
{
     List ll;

    ll.push_back(5);
    ll.push_back(2);
    ll.push_back(1);
    ll.push_back(3);
    ll.push_back(4);

    ll.printLL();
    ll.head = mergeSort(ll.head);
    ll.printLL();
}