#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve()
{

    string s;
    string pattern;
    cin >> s >> pattern;
    vector<int> q;
    q.push_back(0);
    for (int i = 0; i < pattern.size(); i++)
    {
        if (pattern[i] >= '1' && pattern[i] <= '9')
        {
            int ele = pattern[i] - '0' + q[q.size() - 1];
            q.push_back(ele);
        }
    }
    vector<pair<char, string>> val_table;
    vector<pair<int, string>> mult_table;
    val_table.push_back(make_pair('1', "one"));
    val_table.push_back(make_pair('2', "two"));
    val_table.push_back(make_pair('3', "three"));
    val_table.push_back(make_pair('4', "four"));
    val_table.push_back(make_pair('5', "five"));
    val_table.push_back(make_pair('6', "six"));
    val_table.push_back(make_pair('7', "sevem"));
    val_table.push_back(make_pair('8', "eight"));
    val_table.push_back(make_pair('9', "nine"));
    val_table.push_back(make_pair('0', "zero"));
    mult_table.push_back(make_pair(2, "double"));
    mult_table.push_back(make_pair(3, "triple"));
    mult_table.push_back(make_pair(4, "quadruple"));
    mult_table.push_back(make_pair(5, "quintuple"));
    mult_table.push_back(make_pair(6, "sextuple"));
    mult_table.push_back(make_pair(7, "septuple"));
    mult_table.push_back(make_pair(8, "octuple"));
    mult_table.push_back(make_pair(9, "nonuple"));
    mult_table.push_back(make_pair(10, "decuple"));
    vector<string> v_ans;

    cout << endl;
    string ans = "";
    for (int i = 0; i < q.size() - 1; i++)
    {
        v_ans.push_back(s.substr(q[i], q[i + 1] - q[i]));
    }
    int start = 0;
    for (int i = 0; i < v_ans.size(); i++)
    {
        cout << v_ans[i] << " ";
    }
    int curr_time = 0;
    for (int i = 0; i < v_ans.size(); i++)
    {
        for (int j = 0; j < v_ans[i].size(); j++)
        {
            if (v_ans[i][j] == v_ans[i][start])
            {
                curr_time++;
            }
            else
            {
                if (curr_time <= 10 && curr_time >= 2)
                {
                    for (int k = 0; k < mult_table.size(); k++)
                    {
                        if (mult_table[k].first == curr_time)
                        {
                            ans += mult_table[k].second;
                            ans += " ";
                        }
                    }
                }
                for (int k = 0; k < val_table.size(); k++)
                {
                    if (val_table[k].first == v_ans[i][start])
                    {
                        ans += val_table[k].second;
                        ans += " ";
                    }
                }
                cout << ans << endl;
                curr_time = 1;
                start = j;
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