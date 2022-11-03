#include <iostream>
#include <vector>
#include <algorithm>
#define pb(x) push_back(x)
#define vi vector<int>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    for (int i = 0; i < v.size() - 2; i++)
    {
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