#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>
#include <map>

bool myCompare(int x, int y)
{
    return x > y;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> denom(n);
    for (auto &i : denom)
    {
        cin >> i;
    }
    int price;
    cin >> price;
    sort(denom.begin(), denom.end(), myCompare);
    map<int, int> output;
    cout << endl;
    int idx = 0;
    while (price != 0)
    {
        if (denom[idx] <= price)
        {
            price -= denom[idx];
            output[denom[idx]]++;
        }
        else
        {
            idx++;
        }
    }
    map<int, int>::iterator it;
    for (it = output.begin(); it != output.end(); it++)
    {
        cout << it->first << " -> " << it->second << endl;
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