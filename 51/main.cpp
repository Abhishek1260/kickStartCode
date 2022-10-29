#include <iostream>
#include <vector>
#include <stack>
#define pb push_back
using namespace std;

void solve()
{
    int n;
    cin >> n;
    stack<int> st;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }

    int ans = 0;

    for (int i = 0; i < v.size(); i++)
    {
        while (!st.empty() && v[st.top()] < v[i])
        {
            int curr = st.top();
            st.pop();
            if (st.empty())
            {
                break;
            }
            int distance = i - st.top() - 1;
            int minHeight = min(v[st.top()], v[i]) - v[curr];
            ans += minHeight * distance;
        }
        st.push(i);
    }

    cout << ans << endl;
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