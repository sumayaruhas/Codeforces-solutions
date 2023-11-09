#include<bits/stdc++.h>
using namespace std;

// 232075391	Nov/09/2023 19:23UTC+6	sumayaruhas	A - Sum of Round Numbers	GNU C++17	Accepted	77 ms	0 KB

/* 
I hope you don’t forget that giving up decisively also counts as courage .
Life is tough, and things don’t always work out well, but we should be brave and go on with our lives
Dream, you will fully bloom after all the hardships
         ~ Suga
*/ 
void num()
{
    int bb, kk, t = 0, j = 1, i, k;
    cin >> bb;
  int jj = bb;
    for (i = 1; i <= 6; i++) {
        kk = bb % 10;
        bb = bb / 10;
        if (kk != 0) {
            t++;
        }
    }
    cout << t << endl;
  while(jj > 0){
    k = jj % 10;
    if(k != 0){
      cout << k * j << " ";
    }
    jj = jj / 10;
    j = j * 10;
  }
  cout << endl;
}

int main()
{
    int n;
    cin >> n;
    while (n--) {
        num();
    }

    return 0;
}
