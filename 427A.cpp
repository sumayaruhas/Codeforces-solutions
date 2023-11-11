#include<bits/stdc++.h>
using namespace std;

// 232385173	Nov/11/2023 20:05UTC+6	sumayaruhas	427A - Police Recruits	GNU C++17	Accepted	78 ms	0 KB

// https://codeforces.com/problemset/problem/427/A

/* 
I hope you don’t forget that giving up decisively also counts as courage .
Life is tough, and things don’t always work out well, but we should be brave and go on with our lives
Dream, you will fully bloom after all the hardships
         ~ Suga
*/
int main()
{
  int t , kk , i , cr = 0 , po = 0;
  cin >> t;
  for(i = 0 ; i < t ; i++){
    cin >> kk;
  if(kk == -1){
    if(po > 0){
      po--;
    }else{
      cr++;
    }
  }else{
    po += kk;
  }
  }
  cout << cr << endl;
} 
