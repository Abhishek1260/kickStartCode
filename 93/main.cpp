#include <iostream>
#include <vector>
using namespace std;

const int N = 1e5 + 2;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int>
        v[N];
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for (int i = 1; i < n + 1; i++)
    {
        cout << i << " -> ";
        for (auto ans : v[i])
        {
            cout << ans << " ";
        }
        cout << endl;
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}