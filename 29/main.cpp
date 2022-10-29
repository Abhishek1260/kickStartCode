#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {
        string s;
        cin >> s;
        int val = 0;
        int flag = 0;
        int idx = 0;
        while (idx < s.size())
        {
            if (s[idx] == ' ')
            {
                idx++;
            }
            else
            {
                break;
            }
        }
        if (s[idx] == '+')
        {
            idx++;
        }
        if (s[idx] == '-')
        {
            flag = 1;
            idx++;
        }
        for (int i = idx; i < s.size(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                val = val * 10 + (s[i] - '0');
                if (val >= INT_MAX)
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        if (flag = 1)
        {
            val = val * -1;
            if (val <= INT_MIN)
            {
                val = INT_MIN;
            }
        }
        else if (val >= INT_MAX)
        {
            val = INT_MAX;
        }
        cout << val << endl;
    }

    return 0;
}