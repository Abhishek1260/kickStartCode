#include <iostream>
#include <vector>
#define pb(x) push_back(x)
#define vi vector<int>
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
    int start = 0;
    int count = 0;
    vi sum(n);
    sum.pb(0);
    for (int i = 1; i < sum.size(); i++)
    {
        sum[i] = v[i - 1] + sum[i - 1];
    }
    for (auto i : sum)
    {
        cout << i << " ";
    }
    cout << sum.size() << " " << endl;
    for (int i = 0; i < sum.size() - 1; i++)
    {
        start = i + 1;
        while (sum[start] - sum[i] >= 0 && start < sum.size())
        {
            start++;
            count++;
        }
    }
    if (v[v.size() - 1] >= 0)
    {
        count++;
    }
    cout << endl;
    cout << count << endl;
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