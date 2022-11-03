#include <iostream>
#include <vector>
using namespace std;

const int N = 1e5 + 2;
vector<int> adj[N];

void solve()
{
    int n, m;
    cin >> n >> m;
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        cout << i << ": ";
        for (auto ans : adj[i])
        {
            cout << " -> " << ans;
        }
        cout << endl;
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