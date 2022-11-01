#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    map<int, int> mp;
    for (int i = 0; i < a.size(); i++)
    {
        mp[a[i]]++;
    }

    cout << endl;

    map<int, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " -> " << it->second << endl;
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