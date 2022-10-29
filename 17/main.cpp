#include <iostream>
#include <queue>
using namespace std;

class stack
{

    queue<int> q1;
    queue<int> q2;
    int N;

public:
    stack()
    {
        N = 0;
    }

    void push(int val)
    {
        N++;
        q2.push(val);
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop()
    {
        q1.pop();
        N--;
    }

    int top()
    {
        return q1.front();
    }

    int size()
    {
        return N;
    }

    bool isEmpty()
    {
        if (N == 0)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    stack st;

    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        st.push(arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl;

    cout << st.size() << endl;

    return 0;
}