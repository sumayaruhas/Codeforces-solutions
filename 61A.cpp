#include<bits/stdc++.h>
using namespace std;

// 232954025	Nov/16/2023 16:51UTC+6	sumayaruhas	A - Ultra-Fast Mathematician	GNU C++17	Accepted	15 ms	0 KB


/* 
I hope you don’t forget that giving up decisively also counts as courage .
Life is tough, and things don’t always work out well, but we should be brave and go on with our lives
Dream, you will fully bloom after all the hardships
         ~ Suga
*/
int main()
{
  int i;
  string kk , bb;
  cin >> kk >> bb;
  for(i = 0 ; i < kk.size() ; i++)
  {
    if(kk[i] == bb[i]){
      cout << "0";
    }else{
      cout << "1";
    }
  }
  return 0;
} 
