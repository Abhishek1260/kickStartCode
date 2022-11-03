#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool myCompare(int n1, int n2)
{
    return n1 > n2;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> ques(n);
    for (auto &i : ques)
    {
        cin >> i;
    }
    vector<int> greed(n);
    for (int i = 0; i < ques.size(); i++)
    {
        greed[i] = ques[i];
    }
    sort(greed.begin(), greed.end(), myCompare);
    vector<int> ans(n);
    for (int i = 0; i < ques.size(); i++)
    {
    }
    for (auto i : greed)
    {
        cout << i << " ";
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