#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b , i , ch = 0 , bi = 0 , ba = 0;
    cin >> a;
    int arr[a];
    for(i = 0 ; i < a ; i++){
        cin >> arr[i];
    }
    for(i = 0 ; i < a ; i++){
        if(i % 3 == 0){
            ch += arr[i];
        }else if(i % 3 == 1){
            bi += arr[i];
        }else{
            ba += arr[i];
        }
    }
    if(ch > bi && ch > ba){
        cout << "chest" << endl;
    }else if(bi > ch && bi > ba){
        cout << "biceps" << endl;
    }else{
        cout << "back" << endl;
    }
    return 0;
}