#include<bits/stdc++.h>
using namespace std;
/* 
I hope you don’t forget that giving up decisively also counts as courage .
Life is tough, and things don’t always work out well, but we should be brave and go on with our lives
Dream, you will fully bloom after all the hardships
         ~ Suga
*/

int main()
{
  int t , sum = 0;
  cin >> t;
  string kk;
  for(int i = 0 ; i < t ; i++){
    cin >> kk;
    if(kk == "Icosahedron"){
      sum += 20;
    }else if(kk == "Dodecahedron"){
      sum += 12;
    }else if(kk == "Octahedron"){
      sum += 8;
    }else if(kk == "Cube"){
      sum += 6;
    }else{
      sum += 4;
    }
  }
cout << sum << endl;
}


