#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1360/problem/B

// 232188342	Nov/10/2023 13:16UTC+6	sumayaruhas	B - Honest Coach	GNU C++17	Accepted	61 ms	0 KB

/* 
I hope you don’t forget that giving up decisively also counts as courage .
Life is tough, and things don’t always work out well, but we should be brave and go on with our lives
Dream, you will fully bloom after all the hardships
         ~ Suga
*/ 
void num()
{
   int n , i , d = 0;
   cin >> n;
   int arr[n];
  for(i = 0 ; i < n ; i++){
    cin >> arr[i];
  }
  sort(arr , arr + n);
  vector<int>k;
  for(i = 1 ; i < n ; i++){
    d = arr[i] - arr[i - 1];
    k.push_back(d);
  }
  sort(k.begin() , k.end());
  cout << k[0] << endl;
}

int main()
{
    int n;
    cin >> n;
    while (n--) {
        num();
    }

    return 0;
}
