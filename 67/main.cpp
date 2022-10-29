#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    int sum = 0;
    bool found = false;
    pair<int, int> ans;
    for (int i = 0; i < k; i++)
    {
        sum += v[i];
    }
    if (sum % 3 == 0)
    {
        found = true;
        ans = make_pair(0, k - 1);
    }
    for (int i = k; i < n; i++)
    {
        if (found)
        {
            break;
        }
        sum = sum + v[i] - v[i - k];
        if (sum % 3 == 0)
        {
            found = true;
            ans = make_pair(i - k + 1, i);
        }
    }
    if (!found)
    {
        ans = make_pair(-1, 0);
    }

    for (int i = ans.first; i <= ans.second; i++)
    {
        cout << v[i] << " ";
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