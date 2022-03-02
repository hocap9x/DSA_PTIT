#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int Min(string a, string b)
{
    for (int i = 0; i < (int)a.size(); i++)
    {
        if (a[i] == '6')
            a[i] = '5';
    }
    for (int i = 0; i < (int)b.size(); i++)
    {
        if (b[i] == '6')
            b[i] = '5';
    }
    return stoi(a) + stoi(b);
}
int Max(string a, string b)
{
    for (int i = 0; i < (int)a.size(); i++)
    {
        if (a[i] == '5')
            a[i] = '6';
    }
    for (int i = 0; i < (int)b.size(); i++)
    {
        if (b[i] == '5')
            b[i] = '6';
    }
    return stoi(a) + stoi(b);
}
int main()
{
    string a, b;
    cin >> a >> b;
    cout << Min(a, b) << " " << Max(a, b);
    return 0;
}
