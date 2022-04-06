//https://codeforces.com/problemset/problem/275/A
//152734430	Apr/05/2022 13:07UTC+5.5	hahaharshilpp	275A - Lights Out	GNU C++20 (64)	Accepted	15 ms	0 KB

#include <bits/stdc++.h>

using namespace std;


bool evenOdd(int num){
    if(num%2 == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int arr[3][3];
    int initarr[3][3] = {{1,1,1},{1,1,1},{1,1,1}};

    for(int i = 0; i < 3; i++){
        for(int j = 0;j < 3; j++){
            cin >> arr[i][j];
            if(!evenOdd(arr[i][j])){
                initarr[i][j] = !initarr[i][j];
                if(i != 0)
                    initarr[i-1][j] = !initarr[i-1][j];
                if(i != 2)
                    initarr[i+1][j] = !initarr[i+1][j];
                if(j != 0)
                    initarr[i][j - 1] = !initarr[i][j - 1];
                if(j != 2)
                    initarr[i][j + 1] = !initarr[i][j + 1];
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0;j < 3; j++){
            cout << initarr[i][j];
        }
        cout << endl;
    }
 
    return 0;
}
