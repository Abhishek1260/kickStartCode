#include <iostream>
#define n 10
using namespace std;

class queue
{
    int front;
    int back;
    int *arr;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void enqueue(int val)
    {
        if (back == n - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        back++;
        arr[back] = val;
        if (front == -1)
        {
            front++;
        }
    }

    void dequeue()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue Empty" << endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue Empty" << endl;
            return -1;
        }
        return arr[front];
    }

    bool isEmpty()
    {
        if (front == -1 || front > back)
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
        q.enqueue(arr[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        cout << q.peek() << " ";
        q.dequeue();
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