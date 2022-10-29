#include <iostream>
using namespace std;
#include <string>
#include <stack>

void solve()
{
    string s;
    cin >> s;
    int size = s.size();
    stack<char> st;
    int globalflag = 0;
    for (int i = 0; i < size; i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        if (s[i] == ')')
        {
            int flag = 0;
            while (!st.empty() && st.top() != '(')
            {
                if (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
                {
                    flag = 1;
                }
                st.pop();
            }
            if (flag == 1)
            {
                globalflag = 1;
            }
            else
            {
                globalflag = 0;
            }
            st.pop();
        }
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            st.push(s[i]);
        }
    }
    if (globalflag == 1)
    {
        cout << "CORRECT" << endl;
    }
    else
    {
        cout << "NOT CORRECT" << endl;
    }
}

int main()
{

    int t;
    cin >> t;
    int i = 0;
    while (t--)
    {
        i++;
        cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}