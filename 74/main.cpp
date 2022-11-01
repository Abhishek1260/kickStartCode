#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    string commonPrefix = "";
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