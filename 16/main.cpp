#include <iostream>
#include <stack>
using namespace std;

class queue
{

    stack<int> s;

public:
    void push(int val)
    {
        s.push(val);
    }

    int pop()
    {
        if (s.empty())
        {
            cout << "queue empty" << endl;
            return -1;
        }
        int x = s.top();
        s.pop();
        if (s.empty())
        {
            return x;
        }
        int item = pop();
        s.push(x);
        return item;
    }

    bool isEmpty()
    {
        if (s.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{

    return 0;
}