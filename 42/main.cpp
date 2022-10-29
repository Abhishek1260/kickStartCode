#include <iostream>
using namespace std;
#include <vector>

int main()
{

    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {
        int lb, ub;
        cin >> lb >> ub;
        vector<int> v1;
        int count = 0;
        for (int i = lb; i <= ub; i++)
        {
            int temp = i;
            int sum = 0;
            int mult = 1;
            while (temp != 0)
            {
                int digi = temp % 10;
                sum += digi;
                mult *= digi;
                temp = temp / 10;
            }
            if (mult % sum == 0)
            {
                count++;
            }
        }
        cout << "Case #" << T + 1 << ": " << count << endl;
    }

    return 0;
}