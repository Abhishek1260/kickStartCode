#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {
        int N;
        cin >> N;
        int arr[N];
        int max = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        int brr[max + 1];
        for (int i = 0; i <= max; i++)
        {
            brr[i] = 0;
        }

        int ans[N];

        for (int i = 0; i < N; i++)
        {
            int maxele = 0;
            for (int j = 1; j <= arr[i]; j++)
            {
                brr[j]++;
            }
            for (int j = 1; j <= max; j++)
            {
                if (brr[j] >= j && j > maxele)
                {
                    maxele = j;
                }
            }
            ans[i] = maxele;
        }

        cout << "Case #" << T + 1 << ": ";

        for (int i = 0; i < N; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}