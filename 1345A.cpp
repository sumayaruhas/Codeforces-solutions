#include<bits/stdc++.h>
using namespace std;
// 230977431	Nov/02/2023 19:16UTC+6	sumayaruhas	A - Puzzle Pieces	GNU C++17	Accepted	30 ms	0 KB
void num()
{
    int a , b;
    cin >> a >> b;
    if(a == 1 || b == 1 || (a == 2 && b == 2)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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
