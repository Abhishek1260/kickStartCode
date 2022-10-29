#include <iostream>
#include <vector>
using namespace std;

bool isPerfect(int num)
{
    int factor_sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            factor_sum += i;
        }
    }
    if (factor_sum == num)
    {
        return true;
    }
    return false;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    vector<int> c(n);
    for (int i = 0; i < c.size(); i++)
    {
        c[i] = v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (isPerfect(v[i]))
        {
            v[i] = 1;
        }
        else
        {
            v[i] = 0;
        }
    }
    int sum = 0;
    int ans_sum = 0;
    pair<int, int> ans;
    for (int i = 0; i < k; i++)
    {
        sum += v[i];
    }
    ans_sum = max(ans_sum, sum);
    ans = make_pair(0, k - 1);
    for (int i = k; i < n; i++)
    {
        sum = sum - v[i - k] + v[i];
        if (sum > ans_sum)
        {
            ans_sum = sum;
            ans = make_pair(i - k + 1, i);
        }
    }
    for (int i = ans.first; i <= ans.second; i++)
    {
        cout << c[i] << " ";
    }
    cout << ans_sum;
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