#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    do
    {
        for (auto x : a)
            cout << x << " ";
        cout << "\n";
    } while (next_permutation(a.begin(), a.end()));
    return 0;
}
