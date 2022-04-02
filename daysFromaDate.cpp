#include <bits/stdc++.h>

using namespace std;

bool isleap(int year){
    if(year%4 == 0 || year%400 == 0){
        if(year%100 != 0)
            return true;
    }
    return false;
}

int calculate(int day, int month, int year){
    vector<int> calender = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = 0;
    if (isleap(year)){
        calender[1] = 29;
    
    }
    for(int i = 0; i < month - 1; i++){
        days += calender[i];
    }
    return days+day;
}

int main(){
    int day, month, year; cin >> day >> month >> year;
    cout << calculate(day,month,year) << endl;
}