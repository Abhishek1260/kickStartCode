#include <iostream>
#include <vector>
#include <deque>
#include <set>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (auto &i : a)
    {
        cin >> i;
    }

    multiset<int, greater<int>> q;
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        q.insert(a[i]);
    }
    ans.push_back(*q.begin());
    for (int i = k; i < n; i++)
    {
        q.erase(q.lower_bound(a[i - k]));
        q.insert(a[i]);
        ans.push_back(*q.begin());
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}