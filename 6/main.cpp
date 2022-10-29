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

void insertAtTail(node *&head, int val)
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

int count(node *head)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

node *appendKNodes(node *&head, int k)
{
    int size = count(head);
    node *newHead;
    node *newTail;
    node *tail = head;
    int count = 1;
    k = k % size;
    while (tail->next != NULL)
    {
        if (count == size - k)
        {
            newTail = tail;
        }
        if (count == size - k + 1)
        {
            newHead = tail;
        }
        count++;
        tail = tail->next;
    }
    newTail->next = NULL;
    tail->next = head;
    return newHead;
}

int main()
{

    node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    node *newHead = appendKNodes(head, 3);

    display(newHead);

    return 0;
}