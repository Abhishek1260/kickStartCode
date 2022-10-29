#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {
        int n;
        cin >> n;
        vector<int> v1;
        int sum = 0;
        while (n != 0)
        {
            sum += n % 10;
            v1.push_back(n % 10);
            n = n / 10;
        }
        int rem = sum % 9;
        rem = 9 - rem;
        if (v1[0] < rem)
        {
            v1.insert(v1.begin(), rem);
        }
        else
        {
            v1.push_back(rem);
        }
        int ans = 0;
        for (int i = 0; i < v1.size(); i++)
        {
            ans += v1[i] * pow(10, i);
        }
        if (ans % 9 != 0)
        {
            rem = ans % 9;
            rem = 9 - rem;
            ans += rem;
        }
        cout << ans << endl;
    }

    return 0;
}