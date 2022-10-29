#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {
        int n;
        cin >> n;
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i != 0)
            {
                continue;
            }
            int temp = i;
            int rev = 0;
            int rem = 0;

            while (temp != 0)
            {
                rem = temp % 10;
                rev = rev * 10 + rem;
                temp = temp / 10;
            }
            if (rev == i)
            {
                count++;
            }
        }
        cout << "Case #" << T + 1 << ": " << count << endl;
    }

    return 0;
}