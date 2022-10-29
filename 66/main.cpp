#include <iostream>
using namespace std;
#include <climits>
#include <vector>

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    int start = 0;
    int sum = 0;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        while (sum > x)
        {
            ans = min(ans, i - start + 1);
            sum -= v[start];
            start++;
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

    return 0;
}