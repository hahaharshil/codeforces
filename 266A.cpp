//143952490	Jan/25/2022 14:28UTC+5.5	hahaharshilpp	A - Stones on the Table	GNU C++20 (64)	Accepted	30 ms	0 KB
//https://codeforces.com/contest/266/problem/A


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char prevColor;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == prevColor)
        {
            count++;
        }
        prevColor = s[i];
    }
    cout << count << endl;
}