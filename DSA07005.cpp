#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
string Reverse_Sign(string tmp)
{
    for (int i = 0; i < (int)tmp.size(); i++)
    {
        if (tmp[i] == '-')
            tmp[i] = '+';
        else if (tmp[i] == '+')
            tmp[i] = '-';
    }
    return tmp;
}
void Solve()
{
    string s;
    cin >> s;
    if (isalpha(s[0]) || s[0] == '(')
        s.insert(0, 1, '+');
    for (int i = 1; i < (int)s.size(); i++)
    {
        if ((s[i] == '(' && s[i - 1] == '(') || (isalpha(s[i]) && s[i - 1] == '('))
        {
            s.insert(i, 1, '+');
            i--;
        }
    }
    stack<string> stk;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] == ')')
        {
            string tmp = "";
            while (!stk.empty() && stk.top() != "(")
            {
                tmp = stk.top() + tmp;
                stk.pop();
            }
            stk.pop();
            if (stk.top() == "-")
                tmp = Reverse_Sign(tmp);
            stk.pop();
            stk.push(tmp);
        }
        else
        {
            string tmp(1, s[i]);
            stk.push(tmp);
        }
    }
    string ans = "";
    while (!stk.empty())
    {
        ans = stk.top() + ans;
        stk.pop();
    }
    while (ans.front() == '+')
        ans.erase(0, 1);
    cout << ans << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}
