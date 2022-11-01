#include <iostream>
using namespace std;

void solve()
{
    int N, R, C, r, c;
    cin >> N >> R >> C >> r >> c;
    string s;
    cin >> s;
    int arr[R][C];
    arr[r - 1][c - 1] = 1;
    int new_row = r - 1;
    int new_col = c - 1;
    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case 'W':
            new_col--;
            while (arr[new_row][new_col] == 1 && new_col >= 0)
            {
                new_col--;
            }
            arr[new_row][new_col] = 1;
            break;
        case 'E':
            new_col++;
            while (arr[new_row][new_col] == 1 && new_col < C)
            {
                new_col++;
            }
            arr[new_row][new_col] = 1;
            break;
        case 'S':
            new_row++;
            while (arr[new_row][new_col] == 1 && new_row < R)
            {
                new_row++;
            }
            arr[new_row][new_col] = 1;
            break;
        case 'N':
            new_row--;
            while (arr[new_row][new_col] == 1 && new_row >= 0)
            {
                new_row--;
            }
            arr[new_row][new_col] = 1;
            break;

        default:
            break;
        }
    }
    cout << new_row + 1 << " " << new_col + 1 << endl;
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