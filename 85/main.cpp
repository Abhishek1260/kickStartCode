#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<int, long long> mp;

long long fib(int n)
{
    if (mp.find(n) != mp.end())
    {
        return mp[n];
    }
    if (n == 1 || n == 0)
    {
        return n;
    }
    mp[n] = fib(n - 2) + fib(n - 1);
    return mp[n];
}

void solve()
{

    int n;
    cin >> n;

    cout << fib(n) << endl;

    return;
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