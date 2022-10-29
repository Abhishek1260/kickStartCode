#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    stack<pair<int, int>> st;
    vector<int> ans;
    for (int i = 0; i < v.size(); i++)
    {
        int iter = 1;
        while (!st.empty() && st.top().first <= v[i])
        {
            iter += st.top().second;
            st.pop();
        }
        st.push(make_pair(v[i], iter));
        ans.push_back(iter);
    }
    for (auto prices : ans)
    {
        cout << prices << " ";
    }
    cout << endl;
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