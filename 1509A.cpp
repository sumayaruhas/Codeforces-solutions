#include<bits/stdc++.h>
using namespace std;
// 230697510	Oct/31/2023 20:43UTC+6	sumayaruhas	A - Average Height	GNU C++17	Accepted	30 ms	100 KB
void num() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 1) {
            cout << arr[i] << " ";
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        num();
    }
    return 0;
}
