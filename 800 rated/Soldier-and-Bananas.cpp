#include <iostream>
using namespace std;
int main(){
    int k,n,w;
    int com  = 0;
    cin >> k >> n >> w ;
    for(int i=1;i<=w;i++){
      com += k*i;
    }
    if(com-n >= 0){
      cout << com-n;
    }
    else{
      cout << 0 ;
    }
    return 0;
}