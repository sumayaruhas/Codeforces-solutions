#include<bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1637/problem/A

// 233824127	Nov/22/2023 20:16UTC+6	sumayaruhas	A - Sorting Parts	GNU C++17	Accepted	31 ms	200 KB

/* 
I hope you don’t forget that giving up decisively also counts as courage .
Life is tough, and things don’t always work out well, but we should be brave and go on with our lives
Dream, you will fully bloom after all the hardships
         ~ Suga
*/
void num()
{
  int n , i;

  cin >> n;

  vector<int> arr(n);

  for(i=0;i<n;i++)
  {
    cin >> arr[i];
  }

    cout << (is_sorted(arr.begin(), arr.end()) ? "NO" : "YES") << endl;
}


int main()
{
  int t;
  cin >> t;
  while(t--){
    num();
  }
}


