#include <iostream>
#include <vector>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    int zerocnt = 0, i = 0, ans = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j] == 0)
        {
            zerocnt++;
        }
        while (zerocnt > k)
        {
            if (a[i] == j)
            {
                zerocnt--;
            }
            i++;
        }
        ans = max(ans, j - i + 1);
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