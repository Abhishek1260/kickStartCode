#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int ele;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }
    sort(v.begin(), v.end());
    vector<vector<int>> ans;
    for (int i = 0; i < v.size(); i++)
    {
        int start = i + 1;
        int end = v.size() - 1;
        while (start < end)
        {
            if (v[i] + v[start] + v[end] == 0)
            {
                vector<int> vec;
                vec.push_back(v[i]);
                vec.push_back(v[start]);
                vec.push_back(v[end]);
                ans.push_back(vec);
            }
            if (v[i] + v[start] + v[end] > 0)
            {
                end--;
            }
            else if (v[i] + v[start] + v[end] < 0)
            {
                start++;
            }
        }
    }
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
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