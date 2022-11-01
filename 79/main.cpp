#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (auto &i : v1)
    {
        cin >> i;
    }
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(v1[i]);
    }
    vector<int> ans;
    while (!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }
    for (auto i : ans)
    {
        cout << i << " ";
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