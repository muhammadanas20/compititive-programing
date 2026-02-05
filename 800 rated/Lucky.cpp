#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        int first = 0;
        int end = 0;
        for(int i=0;i<6;i++){
            if(i<3){
                first += str[i] - '0';
            }
            else{
                end += str[i] - '0';
            }
        }
       if(first == end) cout << "YES\n" ;
       else cout << "NO\n";
    }
    return 0;
}