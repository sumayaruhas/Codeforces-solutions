#include<bits/stdc++.h>
using namespace std;

// 231592808	Nov/06/2023 19:42UTC+6	sumayaruhas	A - Presents	GNU C++17	Accepted	30 ms	0 KB

/* 
I hope you don’t forget that giving up decisively also counts as courage .
Life is tough, and things don’t always work out well, but we should be brave and go on with our lives
         ~ Suga
*/ 
int main()
{
   int n , j , i;
   cin >> n;
   int arr[n];
   for(int i = 0 ; i < n ; i++){
    cin >> arr[i];
   }
   for(j = 0 ; j <= n ; j++){
    for(i = 0 ; i < n ; i++){
        if(arr[i] == j){
            cout << i + 1 << " ";
        }
    }
   }
   return 0;
}
