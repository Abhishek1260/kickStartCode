#include <iostream>
#include <vector>
#define vi vector<int>
#define pb push_back
#define ll long long
#define read(a, b) cin >> a >> b
#define reap(i, a, b) for (int i = a; i < b; i++)
using namespace std;

void solve()
{
    int n, q;
    read(n, q);
    vi v;
    vector<pair<int, int>> vinp;
    int x;
    int y;
    reap(i, 0, n - 1)
    {
        read(x, y);
        vinp.pb(make_pair(x, y));
    }
    reap(i, 0, q)
    {
        cin >> x;
        v.pb(x);
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
    vector<vector<int>> vans;
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