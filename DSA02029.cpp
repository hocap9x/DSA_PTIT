#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Tower(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << a << " -> " << c << "\n";
        return;
    }
    Tower(n - 1, a, c, b);
    Tower(1, a, b, c);
    Tower(n - 1, b, a, c);
}
int main()
{
    int n;
    cin >> n;
    Tower(n, 'A', 'B', 'C');
    return 0;
}
