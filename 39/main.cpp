#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {
        string s, p;
        cin >> s >> p;

        int ptr1 = 0;
        int ptr2 = 0;

        int ans = 0;

        while (ptr1 < s.size() && ptr2 < p.size())
        {
            if (s[ptr1] == p[ptr2])
            {
                ptr1++;
                ptr2++;
            }
            else
            {
                ptr2++;
                ans++;
            }
        }
        if (ptr1 != s.size())
        {
            cout << "Case #" << T + 1 << ": "
                 << "IMPOSSIBLE" << endl;
        }
        else
        {
            ans += p.size() - ptr2;
            cout << "Case #" << T + 1 << ": " << ans << endl;
        }
    }

    return 0;
}