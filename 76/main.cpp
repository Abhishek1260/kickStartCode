#include <iostream>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string temp = n;
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
    }
    sum = sum % 9;
    sum = 9 - sum;
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