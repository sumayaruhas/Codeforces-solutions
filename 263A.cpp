#include<bits/stdc++.h>
using namespace std;

// 231734652	Nov/07/2023 19:00UTC+6	sumayaruhas	A - Beautiful Matrix	GNU C++17	Accepted	30 ms	0 KB

/* 
I hope you don’t forget that giving up decisively also counts as courage .
Life is tough, and things don’t always work out well, but we should be brave and go on with our lives
Dream, you will fully bloom after all the hardships
         ~ Suga
*/ 
int main()
{
  int i , j , bb;
  for(i = 1 ; i <= 5 ; i++){
    for(j = 1 ; j <= 5 ; j++){
      cin >> bb;
      if(bb == 1){
        cout << abs(i - 3) + abs(j - 3) << endl;
        //break;
      }
    }
  }
   return 0;
}
