#include <iostream>
#include <queue>
using namespace std;

class stack
{

    queue<int> q1;
    queue<int> q2;
    int n;

public:
    stack()
    {
        n = 0;
    }

    void push(int val)
    {
        q1.push(val);
        n++;
    }

    void pop()
    {
        if (q1.empty())
        {
            cout << "stack empty" << endl;
            return;
        }

        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }

        q1.pop();
        n--;
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    int top()
    {
        if (q1.empty())
        {
            cout << "stack empty" << endl;
            return -1;
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q2.push(ans);
        queue<int> temp = q2;
        q2 = q1;
        q1 = temp;
        return ans;
    }

    int size()
    {
        return n;
    }
};

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    stack st;
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