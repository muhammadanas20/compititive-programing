#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    sort(str.begin(), str.end());
    int uniqueCount = distance(str.begin(), unique(str.begin(), str.end()));

    if(uniqueCount % 2 == 0) 
        cout << "CHAT WITH HER!";
    else 
        cout << "IGNORE HIM!";
}
