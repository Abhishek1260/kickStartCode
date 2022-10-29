#include <iostream>
#include <vector>
using namespace std;

void solve()
{

    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        sum += v[i];
    }
    if (sum < x)
    {
        ans = sum;
    }
    for (int i = k; i < n; i++)
    {
        sum -= v[i - k];
        sum += v[i];
        if (sum < x)
        {
            ans = max(ans, sum);
        }
    }
    cout << ans << endl;
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
}