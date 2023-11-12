#include<bits/stdc++.h>
using namespace std;
// https://codeforces.com/contest/1003/problem/A


// 232523542	Nov/12/2023 21:19UTC+6	sumayaruhas	A - Polycarp's Pockets	GNU C++17	Accepted	15 ms	0 KB

/* 
I hope you don’t forget that giving up decisively also counts as courage .
Life is tough, and things don’t always work out well, but we should be brave and go on with our lives
Dream, you will fully bloom after all the hardships
         ~ Suga
*/
int main()
{
 int n , i , kk;
 cin >> n;
 vector<int> v(101);
 for(i =0 ; i < n ; i++){
  cin >> kk;
  v[kk]++;
 }
  cout << *max_element(v.begin() , v.end()) << endl;
} 
