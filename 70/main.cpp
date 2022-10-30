#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

bool myComapre(int x, int y)
{
    return x > y;
}

void solve()
{
    int n;
    cin >> n;
    vector<char> v(n);
    vector<int> alex;
    vector<int> bob;
    int ele;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        if (ele % 2 == 0)
        {
            v.push_back('b');
            bob.push_back(ele);
        }
        else
        {
            v.push_back('a');
            alex.push_back(ele);
        }
    }
    sort(alex.begin(), alex.end());
    sort(bob.begin(), bob.end(), myComapre);
    // cout << "done";
    int ptr1 = 0;
    int ptr2 = 0;
    for (auto i : v)
    {
        if (i == 'a')
        {
            cout << alex[ptr1] << " ";
            ptr1++;
        }
        else if (i == 'b')
        {
            cout << bob[ptr2] << " ";
            ptr2++;
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