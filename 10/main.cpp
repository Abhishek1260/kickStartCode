#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {
        int r, R;
        cin >> r >> R;
        int dist1, dist2, red;
        cin >> red;
        double arr[red];
        for (int i = 0; i < red; i++)
        {
            cin >> dist1 >> dist2;
            arr[i] = sqrt(pow(dist1, 2) + pow(dist2, 2));
        }
        int yellow;
        cin >> yellow;
        double brr[yellow];
        for (int i = 0; i < yellow; i++)
        {
            cin >> dist1 >> dist2;
            brr[i] = sqrt(pow(dist1, 2) + pow(dist2, 2));
        }
        sort(arr, arr + red);
        sort(brr, brr + yellow);
        int scoreRed = 0;
        int scoreYellow = 0;
        int idx1 = 0, idx2 = 0, idx3 = 0;
        while (idx1 < red && idx2 < yellow && idx3 < red + yellow)
        {
            if (arr[idx1] < brr[idx2] && scoreYellow == 0 && (arr[idx1] <= r + R))
            {
                scoreRed++;
                idx1++;
            }
            if (arr[idx1] > brr[idx2] && scoreRed == 0 && (brr[idx2] <= r + R))
            {
                scoreYellow++;
                idx2++;
            }
            idx3++;
        }
        while (idx1 < red && scoreYellow == 0)
        {
            if (arr[idx1] <= r + R && brr[idx2] > arr[idx1])
            {
                scoreRed++;
            }
            idx1++;
        }
        while (idx2 < yellow && scoreRed == 0)
        {
            if (brr[idx2] <= r + R && brr[idx2] < arr[idx1])
            {
                scoreYellow++;
            }
            idx2++;
        }
        cout << "Case #" << T + 1 << ": " << scoreRed << " " << scoreYellow << endl;
    }

    return 0;
}
