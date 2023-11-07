#include<bits/stdc++.h>
using namespace std;

// 231730241	Nov/07/2023 18:26UTC+6	sumayaruhas	112A - Petya and Strings	GNU C++17	Accepted	60 ms	0 KB

/* 
I hope you don’t forget that giving up decisively also counts as courage .
Life is tough, and things don’t always work out well, but we should be brave and go on with our lives
Dream, you will fully bloom after all the hardships
         ~ Suga
*/ 
int main()
{
   string kk , bb;
   cin >> kk >> bb;
   int i , b;
   int a = kk.size();
   for(i = 0 ; i < a ; i++){
    kk[i] = tolower(kk[i]);
    bb[i] = tolower(bb[i]);
   }
   for(i = 0 ; i < a ; i++){
  if(kk[i] == bb[i]){
    b = 0;
  }else{
    if(kk[i] > bb[i]){
    b = 1;
            break;
    }else{
    b = -1;
            break;    }
  }
   }
   cout << b << endl;
   return 0;
}
