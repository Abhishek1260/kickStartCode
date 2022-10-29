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

class queue
{

    node *front;
    node *back;

public:
    queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int val)
    {
        node *n = new node(val);
        if (front == NULL)
        {
            front = n;
            back = n;
            return;
        }
        back->next = n;
        back = n;
    }

    void pop()
    {
        if (front == NULL)
        {
            cout << "Queue Empty" << endl;
            return;
        }
        node *temp = front;
        front = front->next;
        delete temp;
    }

    int peek()
    {
        if (front == NULL)
        {
            cout << "Queue Empty" << endl;
            return -1;
        }
        return front->data;
    }

    bool isEmpty()
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    queue q;
    int arr[4] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        q.push(arr[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        cout << q.peek() << " ";
        q.pop();
    }

    cout << endl;

    if (q.isEmpty())
    {
        cout << "EMPTY" << endl;
    }
    else
    {
        cout << "NOT EMPTY" << endl;
    }

    return 0;
}