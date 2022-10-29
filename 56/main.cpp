#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<char> ch(256, -1);
    int maxLen = 0, start = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (ch[s[i]] > start)
        {
            start = ch[s[i]];
        }
        ch[s[i]] = i;
        maxLen = max(maxLen, i - start);
    }
    cout << maxLen << endl;
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