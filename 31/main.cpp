#include <iostream>
using namespace std;

bool isMatch(string s, string p)
{
    int idx = 0;
    while (idx < s.size())
    {
        if (p[idx])
        {
            if (s[idx] == p[idx])
            {
                idx++;
            }
            if (p[idx] == '.')
            {
                idx++;
            }
            if (p[idx] == '#')
            {
                if (s[idx] == p[idx - 1])
                {
                    idx++;
                }
                if (p[idx - 1] == '.')
                {
                    idx++;
                }
            }
        }
        else
        {
            return false;
        }
    }
}

int main()
{

    string s;
    string p;
    cin >> s >> p;

    return 0;
}