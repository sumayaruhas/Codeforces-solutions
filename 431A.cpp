#include<bits/stdc++.h>
using namespace std;

// 232859962	Nov/15/2023 19:07UTC+6	sumayaruhas	A - Black Square	GNU C++17	Accepted	31 ms	300 KB


/* 
I hope you don’t forget that giving up decisively also counts as courage .
Life is tough, and things don’t always work out well, but we should be brave and go on with our lives
Dream, you will fully bloom after all the hardships
         ~ Suga
*/
int main()
{
  int sum = 0;
  string kk;
  int arr[5];
  for(int i = 1 ; i <= 4 ; i++){
    cin >> arr[i];
  }
  cin >> kk;
  for(int i = 0 ; i < kk.size() ; i++){
    sum += arr[kk[i] - '0'];
  }
  cout << sum << endl;
} 
