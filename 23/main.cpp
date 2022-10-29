#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {
        int M, N, P;
        cin >> M >> N >> P;
        int arr[M][N];
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> arr[i][j];
            }
        }
        int steps = 0;
        int max = 0;
        for (int i = 0; i < N; i++)
        {
            int max = arr[0][i];
            for (int j = 0; j < M; j++)
            {
                if (max < arr[j][i])
                {
                    max = arr[j][i];
                }
            }
            if (max != arr[P - 1][i])
            {
                steps += max - arr[P - 1][i];
            }
        }
        cout << "Case #" << T + 1 << ": " << steps << endl;
    }

    return 0;
}