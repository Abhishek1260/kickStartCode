#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPalindrome(int num)
{
    int temp = num;
    int rev = 0;
    int rem = 0;
    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if (rev == num)
    {
        return true;
    }
    return false;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int sum = 0;
    pair<int, int> ans;
    bool found = false;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    for (int i = 0; i < k; i++)
    {
        sum = sum * 10 + v[i];
    }
    if (isPalindrome(sum))
    {
        found = true;
        ans = make_pair(0, k - 1);
    }
    int multiplier = 1;
    for (int i = 1; i < k; i++)
    {
        multiplier *= 10;
    }
    for (int i = k; i < n; i++)
    {
        if (found)
        {
            break;
        }
        sum = (sum % multiplier) * 10 + v[i];
        if (isPalindrome(sum))
        {
            found = true;
            ans = make_pair(i - k + 1, i);
        }
    }
    if (!found)
    {
        cout << "NOT FOUND";
    }
    else
    {
        for (int i = ans.first; i <= ans.second; i++)
        {
            cout << v[i] << " ";
        }
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