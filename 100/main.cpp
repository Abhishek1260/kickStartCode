#include <iostream>
#include <vector>
#include <queue>
#define pb(x) push_back(x);
#define ll long long
using namespace std;

const int N = 1e5 + 2;
bool vis[N];
vector<int> adj[N];

void solve()
{

    for (int i = 0; i < N; i++)
    {
        vis[i] = false;
        adj[i].clear();
    }

    int n, m;
    cin >> n >> m;

    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    queue<int> q;
    q.push(1);
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        vis[curr] = true;
        for (auto i : adj[curr])
        {
            cout << "i " << i << endl;
            if (!vis[i])
            {
                q.push(i);
            }
        }
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