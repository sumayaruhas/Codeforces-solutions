#include<bits/stdc++.h>
using namespace std;

// 231546310	Nov/06/2023 12:37UTC+6	sumayaruhas	A - Is your horseshoe on the other hoof?	GNU C++17	Accepted	30 ms	0 KB

/* 
I hope you don’t forget that giving up decisively also counts as courage .
Life is tough, and things don’t always work out well, but we should be brave and go on with our lives
         ~ Suga
*/ 
int main()
{
   long long int arr[4];
    int i , d = 0;
    for(i = 0 ; i < 4 ; i++){
        cin >> arr[i];
    }
    sort(arr , arr + 4);
    for(i = 0 ; i < 3 ; i++){
        if(arr[i] == arr[i + 1]){
            d++;
        }
    }
    cout << d << endl;
}
