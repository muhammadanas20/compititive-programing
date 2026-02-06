#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, s, x;
        cin >> n >> s >> x;
        int sum = 0;
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            sum += a;
        }

        if(sum > s) {
            cout << "NO\n";
        }
        else if((s - sum) % x == 0) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}
