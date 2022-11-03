#include <iostream>
using namespace std;
#include <vector>

const long long N = 1e6 + 2;

void solve()
{
    int n;
    cin >> n;

    vector<char> v(N, 'V');
    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        if (flag)
        {
            if (v[i] == 'V')
            {
                v[i] = 'B';
                if (i < n - 1)
                {
                    v[i + 1] = 'X';
                }
                flag = !flag;
            }
        }
        else
        {
            if (v[i] == 'V')
            {
                if (v[i + 1] == 'V')
                {
                    v[i + 1] = 'J';
                    v[i] = 'X';
                    if (i < n - 1)
                    {
                        v[i + 2] = 'X';
                    }
                }
                else
                {
                    v[i] = 'J';
                }
                flag = !flag;
            }
        }
    }
    int count = 0;
    for (auto i : v)
    {
        if (i == 'B')
            count++;
    }
    cout << count << endl;
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