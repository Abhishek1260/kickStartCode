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

void makeInstersection(node *&head1, node *&head2, int key)
{
    node *temp1 = head1;
    node *temp2 = head2;
    while (temp1->next->data != key)
    {
        temp1 = temp1->next;
    }
    while (temp2->next->data != key)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1->next;
}

int getSize(node *head)
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

int findIntersections(node *&head1, node *&head2)
{
    int size1 = getSize(head1);
    int size2 = getSize(head2);
    node *temp1 = head1;
    node *temp2 = head2;
    int count = 0;
    if (size1 > size2)
    {
        while (count < size1 - size2)
        {
            temp1 = temp1->next;
            count++;
        }
    }
    else
    {
        while (count < size2 - size1)
        {
            temp2 = temp2->next;
            count++;
        }
    }
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->next == temp2->next)
        {
            return count;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
        count++;
    }
    return -1;
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 7};
    int brr[4] = {9, 10, 5, 6};

    node *head1 = NULL;
    node *head2 = NULL;

    for (int i = 0; i < 6; i++)
    {
        insertAtTail(head1, arr[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        insertAtTail(head2, brr[i]);
    }

    makeInstersection(head1, head2, 5);
    display(head1);
    display(head2);

    int pos = findIntersections(head1, head2);
    cout << pos << endl;

    return 0;
}