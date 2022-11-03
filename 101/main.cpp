#include <iostream>
#include <algorithm>
using namespace std;

bool myCompare(int x, int y)
{
    return x > y;
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }
    sort(arr, arr + n);
    sort(brr, brr + n, myCompare);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += arr[i] * brr[i];
    }
    cout << ans << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}