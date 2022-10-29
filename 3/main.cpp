#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;

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
    return;
}

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deletionAtHead(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;
}

void deletion(node *head, int val)
{
    if (head == NULL)
    {
        return;
    }
    node *temp1 = head;
    while (temp1->next->data != val && temp1 != NULL)
    {
        temp1 = temp1->next;
    }
    node *temp2 = temp1->next;
    temp1->next = temp1->next->next;
    delete temp2;
}

node *reverseNodes(node *head)
{
    node *prev = NULL;
    node *curr = head;
    node *next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

node *recursiveReverse(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newHead = recursiveReverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

node *kNodes(node *&head, int k)
{
    node *prev = NULL;
    node *curr = head;
    node *next;
    int count = 0;
    while (curr != NULL && count < k)
    {
        count++;
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    if (next != NULL)
    {
        head->next = kNodes(next, k);
    }
    return prev;
}

int main()
{

    node *head = NULL;
    insertionAtTail(head, 10);
    insertionAtTail(head, 20);
    insertionAtTail(head, 30);
    insertAtHead(head, 40);
    if (search(head, 30))
    {
        cout << "FOUND" << endl;
    }
    else
    {
        cout << "NOT FOUND" << endl;
    }
    display(head);
    node *newHead = reverseNodes(head);
    display(newHead);
    node *againNewHead = recursiveReverse(newHead);
    display(againNewHead);

    return 0;
}