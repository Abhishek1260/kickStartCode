#include <iostream>
#include <vector>
#include <queue>
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
    vis[1] = true;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        vector<int>::iterator it;
        for (it = adj[curr].begin(); it != adj[curr].end(); it++)
        {
            if (!vis[*it])
            {
                q.push(*it);
                vis[*it] = true;
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