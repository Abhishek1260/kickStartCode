#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next = NULL;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertionAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    return;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    n->next = head;
    head = n;
    return;
}

bool detectCycle(node *head)
{
    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        if (fast == slow)
        {
            return true;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}

void makeCycle(node *&head, int val)
{
    node *temp = head;
    node *startNode;
    int count = 0;
    while (temp->next != NULL)
    {
        if (count == val)
        {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

void removeCycle(node *head)
{
    node *fast = head;
    node *slow = head;
    do
    {
        fast = fast->next->next;
        slow = slow->next;
    } while (fast != slow);
    fast = head;
    while (fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
}

int main()
{

    node *head = NULL;
    insertionAtTail(head, 1);
    insertionAtTail(head, 2);
    insertionAtTail(head, 3);
    insertionAtTail(head, 4);
    insertionAtTail(head, 5);
    insertionAtTail(head, 6);
    insertionAtTail(head, 7);
    insertionAtTail(head, 8);

    makeCycle(head, 4);
    if (detectCycle(head))
    {
        cout << "CYCLE FOUND" << endl;
        removeCycle(head);
        display(head);
    }
    else
    {
        display(head);
    }

    return 0;
}