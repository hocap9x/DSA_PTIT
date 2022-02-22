#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
set<string> diff;
bool Check(string s)
{
    int day = stoi(s.substr(0, 2));
    int month = stoi(s.substr(2, 2));
    int year = stoi(s.substr(4, 4));
    if (day == 0 || month == 0 || month > 12 || year < 2000)
        return false;
    return true;
}
void Try(int len, string s)
{
    if (len == 8)
    {
        if (Check(s))
        {
            s.insert(2, 1, '/');
            s.insert(5, 1, '/');
            diff.insert(s);
        }
        return;
    }
    for (auto x : {"0", "2"})
        Try(len + 1, s + x);
}
int main()
{
    Try(0, "");
    for (auto x : diff)
        cout << x << "\n";
    return 0;
}
