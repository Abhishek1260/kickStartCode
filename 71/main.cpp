#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    string s, pattern;
    cin >> s >> pattern;
    int size = s.size();
    vector<int> v;
    v.push_back(0);
    vector<pair<char, string>> uwu;
    uwu.push_back(make_pair('1', "one"));
    uwu.push_back(make_pair('2', "two"));
    uwu.push_back(make_pair('3', "three"));
    uwu.push_back(make_pair('4', "four"));
    uwu.push_back(make_pair('5', "five"));
    uwu.push_back(make_pair('6', "six"));
    uwu.push_back(make_pair('7', "seven"));
    uwu.push_back(make_pair('8', "eight"));
    uwu.push_back(make_pair('9', "nine"));
    vector<pair<int, string>> uwu_new;
    uwu_new.push_back(make_pair(2, "double"));
    uwu_new.push_back(make_pair(3, "triple"));
    uwu_new.push_back(make_pair(4, "quadruple"));
    uwu_new.push_back(make_pair(5, "quintuple"));
    uwu_new.push_back(make_pair(6, "sextuple"));
    uwu_new.push_back(make_pair(7, "septuple"));
    uwu_new.push_back(make_pair(8, "octuple"));
    uwu_new.push_back(make_pair(9, "nonuple"));
    uwu_new.push_back(make_pair(10, "decuple"));
    for (int i = 0; i < pattern.size(); i++)
    {
        if (pattern[i] >= '1' && pattern[i] <= '9')
        {
            int push = (pattern[i] - '0') + v[v.size() - 1];
            v.push_back(push);
        }
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
    int couter = 0;
    int start_counter = 0;
    int start = 0;
    string ans = "";
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = v[i]; j < v[i + 1]; j++)
        {
            if (s[j] == s[start])
            {
                cout << s[i] << " : " << s[start] << endl;
                start_counter++;
            }
            if (s[j] != s[start])
            {
                cout << start_counter << " -> " << start << endl;
                start_counter = 0;
                start = j + 1;
            }
        }
    }
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