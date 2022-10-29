#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n, target;
    cin >> n >> target;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    bool found = false;
    int index1 = 0;
    int index2 = 0;
    int index3 = 0;
    sort(v.begin(), v.end());

    for (int i = 0; i < n - 2; i++)
    {
        int start = i + 1;
        int end = n - 1;

        while (start < end)
        {
            int curr = v[i] + v[start] + v[end];
            if (curr == target)
            {
                found = true;
                break;
            }
            if (curr < target)
            {
                start++;
            }
            else if (curr > target)
            {
                end--;
            }
        }
    }
    if (found == true)
    {
        cout << "FOUND" << endl;
    }
    else
    {
        cout << "NOT FOUND" << endl;
    }
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