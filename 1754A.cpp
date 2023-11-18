#include<bits/stdc++.h>
using namespace std;

// 233341674	Nov/18/2023 23:46UTC+6	sumayaruhas	A - Technical Support	GNU C++17	Accepted	30 ms	0 KB


/* 
I hope you don’t forget that giving up decisively also counts as courage .
Life is tough, and things don’t always work out well, but we should be brave and go on with our lives
Dream, you will fully bloom after all the hardships
         ~ Suga
*/
void num()
{
 int n , q = 0 , a = 0;
  cin >> n;
  string kk;
  cin >> kk;
  for(int i = 0 ; i < n ; i++){
    if(kk[i] == 'Q'){
      q++;
    }else{
     q--;
    }
    if(q < 0){
      q = 0;
    }
  }
  if(q == 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    num();
  }
}


