#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool myCompare(pair<string, int> p1, pair<string, int> p2)
{
    if (p1.first.compare(p2.first) < 0)
    {
        return true;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {
        int n;
        cin >> n;
        vector<pair<string, int>> v1;
        vector<pair<int, int>> v2;
        for (int i = 0; i < n; i++)
        {
            string S;
            int D, U;
            cin >> S >> D >> U;
            pair<string, int> p1;
            p1.first = S;
            p1.second = U;
            pair<int, int> p2;
            p2.first = D;
            p2.second = U;
            v1.push_back(p1);
            v2.push_back(p2);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        int ans = 0;
        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i].second == v2[i].second)
            {
                ans++;
            }
        }

        cout << "Case #" << T + 1 << ": " << ans << endl;
    }
    return 0;
}