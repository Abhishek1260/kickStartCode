#include <iostream>
#include <vector>
#define vi vector<int>
#define vii vector<vi>
#define pb(x) push_back(x)
using namespace std;

void solve()
{

    int n, m;
    cin >> n >> m;

    int arr[n + 1][n + 1];

    for (int i = 0; i <= n + 1; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            arr[i][j] = 0;
        }
    }

    int x, y;

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        arr[x][y] = 1;
        arr[y][x] = 1;
    }

    cout << "matrix" << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
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