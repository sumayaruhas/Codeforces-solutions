#include<bits/stdc++.h>
using namespace std;

// 233090312	Nov/17/2023 20:04UTC+6	sumayaruhas	B - Drinks	GNU C++17	Accepted	30 ms	0 KB


/* 
I hope you don’t forget that giving up decisively also counts as courage .
Life is tough, and things don’t always work out well, but we should be brave and go on with our lives
Dream, you will fully bloom after all the hardships
         ~ Suga
*/
int main()
{
  int n , sum = 0;
  double ans;
  cin >> n;
  int arr[n];
  for(int i = 0 ; i < n ; i++){
    cin >> arr[i];
    sum += arr[i];
  }
  ans = (double)sum / n;
  cout << fixed << setprecision(12) << ans << endl;
  return 0;
} 
