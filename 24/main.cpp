#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

bool myComparator(pair<double, char> p1, pair<double, char> p2)
{
    return p1.first < p2.first;
}

int main()
{

    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {
        int rs, rh;
        cin >> rs >> rh;
        int rn;
        cin >> rn;
        double arr[8];
        int dist1, dist2;
        for (int i = 0; i < rn; i++)
        {
            cin >> dist1 >> dist2;
            arr[i] = sqrt(pow(dist1, 2) + pow(dist2, 2));
        }
        int yn;
        cin >> yn;
        double brr[8];
        for (int i = 0; i < yn; i++)
        {
            cin >> dist1 >> dist2;
            brr[i] = sqrt(pow(dist1, 2) + pow(dist2, 2));
        }
        sort(arr, arr + rn);
        sort(brr, brr + yn);
        vector<pair<double, char>> v1;
        for (int i = 0; i < rn; i++)
        {
            pair<double, char> p1;
            p1.first = arr[i];
            p1.second = 'r';
            v1.push_back(p1);
        }
        for (int i = 0; i < yn; i++)
        {
            pair<double, char> p1;
            p1.first = brr[i];
            p1.second = 'y';
            v1.push_back(p1);
        }
        sort(v1.begin(), v1.end(), myComparator);
        int score_red = 0;
        int score_yellow = 0;
        double smallest_dist = v1[0].first;
        char smalles_win = v1[0].second;
        int index = 0;
        while (v1[index].second == smalles_win)
        {
            if (v1[index].first <= rs + rh)
            {
                if (v1[index].second == 'y')
                {
                    score_yellow++;
                }
                else
                {
                    score_red++;
                }
            }
            index++;
        }
        cout << "Case #" << T + 1 << ": " << score_red << " " << score_yellow << endl;
    }

    return 0;
}