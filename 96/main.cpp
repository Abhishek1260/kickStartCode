#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int answer(int n, vector<int> &denom)
{
    if (n == 0)
    {
        return 0;
    }
    int curr = INT_MAX;
    for (int i = 0; i < denom.size(); i++)
    {
        if (n - denom[i] >= 0)
        {
            int subAnswer = answer(n - denom[i], denom);
            curr = min(curr, subAnswer + 1);
        }
        return curr;
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (auto &i : v)
    {
        cin >> i;
    }
    cout << "THIS IS DONE" << endl;
    int ans = answer(n, v);
    cout << "ANS : " << ans << endl;
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