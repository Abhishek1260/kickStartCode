#include <iostream>
#include <algorithm>
using namespace std;

int N, D, arr[1000001];

void solve()
{
    cin >> N >> D;
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    for (int i = 0; i < N; i++)
    {
        if (D >= arr[i])
        {
            D -= arr[i];
            ans++;
        }
    }
    cout << ans << endl;
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