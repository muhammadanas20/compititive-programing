#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int a, b, c = 0;
    int maxC = 0;
    while (k--)
    {
        cin >> a >> b;
        c -= a;
        c += b;
        maxC = max(maxC, c);
    }
    cout << maxC;
}