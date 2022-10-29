#include <iostream>
#include <stack>
using namespace std;

void reverseSentence(string s)
{
    stack<string> s1;
    for (int i = 0; i < s.length(); i++)
    {
        string words = "";
        while (s[i] != ' ' && i < s.length())
        {
            words += s[i];
            i++;
        }
        s1.push(words);
    }

    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << endl;
}

int main()
{

    string s = "the quick brown fox is good";
    reverseSentence(s);

    return 0;
}