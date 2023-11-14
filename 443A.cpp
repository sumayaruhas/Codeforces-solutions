#include<bits/stdc++.h>
using namespace std;

// 232756423	Nov/14/2023 19:26UTC+6	sumayaruhas	A - Anton and Letters	GNU C++17	Accepted	15 ms	100 KB

/* 
I hope you don’t forget that giving up decisively also counts as courage .
Life is tough, and things don’t always work out well, but we should be brave and go on with our lives
Dream, you will fully bloom after all the hardships
         ~ Suga
*/
int main()
{
  string kk;
  //cin >> kk;
  set<char> v;
  getline(cin, kk);
  for(int i = 0 ; i < kk.size(); i++){
  if(kk[i] >= 'a' && kk[i] <= 'z'){
    v.insert(kk[i]);
  }
  }
cout << v.size() << endl;
} 
