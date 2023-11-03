#include<bits/stdc++.h>
using namespace std;
// 231080187	Nov/03/2023 13:35UTC+6	sumayaruhas	1747A - Two Groups	GNU C++17	Accepted	467 ms	400 KB
void num()
{
    long long int n , i , sum = 0;
    cin >> n;
    int arr[n];
    for(i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    for(i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    if(sum < 0){
        cout << 0 - sum << endl;
    }else{
        cout << sum << endl;
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
