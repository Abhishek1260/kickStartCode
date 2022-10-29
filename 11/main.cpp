#include <iostream>
#define n 10
using namespace std;

class stack
{
    int top;
    int *arr;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int val)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Empty" << endl;
            return;
        }
        top--;
    }

    int topEle()
    {
        if (top == -1)
        {
            cout << "Stack Empty" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.topEle() << endl;
    st.pop();
    cout << st.topEle() << endl;
    st.pop();
    cout << st.topEle() << endl;
    st.pop();
    cout << st.topEle() << endl;

    cout << st.isEmpty();

    return 0;
}