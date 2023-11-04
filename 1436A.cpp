#include<bits/stdc++.h>
using namespace std;
// 231341987	Nov/04/2023 19:51UTC+6	sumayaruhas	1436A - Reorder	GNU C++17	Accepted	15 ms	0 KB
void num()
{
int n , k , i , sum = 0;
cin >> n >> k;
int arr[n];
for(i = 0 ; i < n ; i++){
    cin >> arr[i];
    sum += arr[i];
}
if(sum == k){
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
