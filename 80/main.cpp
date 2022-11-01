#include <iostream>
#include <queue>
#include <vector>
using namespace std;

priority_queue<int, vector<int>> pqmax;
priority_queue<int, vector<int>, greater<int>> pqmin;

void insert(int x)
{
    if (pqmin.size() == pqmax.size())
    {
        if (pqmax.size() == 0)
        {
            pqmax.push(x);
            return;
        }
        }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> input(n);
    for (auto &i : input)
    {
        cin >> i;
    }
    vector<double> ans;
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