#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int a[50], n;
bool Check()
{
    string s;
    for (int i = 1; i <= n; i++)
        s += to_string(a[i]);
    string tmp(s.rbegin(), s.rend());
    return (s == tmp);
}
void Out()
{
    for (int i = 1; i <= n; i++)
        cout << a[i] << " \n"[i == n];
}
void Try(int k)
{
    if (k > n)
        return;
    for (int i = 0; i < 2; i++)
    {
        a[k] = i;
        if (k == n)
        {
            if (Check())
                Out();
        }
        else
            Try(k + 1);
    }
}
int main()
{
    cin >> n;
    Try(1);
    return 0;
}
