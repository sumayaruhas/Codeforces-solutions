#include<bits/stdc++.h>
using namespace std;
// 231098249	Nov/03/2023 15:59UTC+6	sumayaruhas	1451A - Subtract or Divide	GNU C++17	Accepted	31 ms	0 KB
void num()
{
     long long int n;
    cin >> n;
    if(n == 1 || n == 0){
        cout << 0 << endl;
    }else if(n == 2){
        cout << 1 << endl;
    }else if(n == 3){
        cout << 2 << endl;
    }else if(n % 2 == 0){
        cout << 2 << endl;
    }else{
        cout << 3 << endl;
    }
    
}
int main()
{
    int t ;
    cin >> t;
    while(t--){
        num();
    }

}
