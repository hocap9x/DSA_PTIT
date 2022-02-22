#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n;
char k;
void Try(int idx, string s, char nxt)
{
    if (idx == n)
    {
        cout << s << "\n";
        return;
    }
    for (char c = nxt; c <= k; c++)
        Try(idx + 1, s + c, c);
}
int main()
{
    cin >> k >> n;
    Try(0, "", 'A');
    return 0;
}
