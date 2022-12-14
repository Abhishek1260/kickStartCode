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

node *merge(node *&head1, node *head2)
{
    node *ptr1 = head1;
    node *ptr2 = head2;
    node *dummyNode = new node(-1);
    node *ptr3 = dummyNode;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data < ptr2->data)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }
    while (ptr1 != NULL)
    {
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }
    while (ptr2 != NULL)
    {
        ptr3->next = ptr2;
        ptr3 = ptr3->next;
        ptr2 = ptr2->next;
    }
    ptr3->next = NULL;
    return dummyNode->next;
}

int main()
{

    int arr[6] = {2,
                  3,
                  6,
                  8,
                  9,
                  12};
    int brr[4] = {1, 5, 10, 11};

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

    display(head1);
    display(head2);

    node *newHead = merge(head1, head2);
    display(newHead);

    return 0;
}