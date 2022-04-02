// https://codeforces.com/problemset/problem/467/A
// 152493829	Apr/02/2022 18:49UTC+5.5	hahaharshilpp	467A - George and Accommodation	GNU C++20 (64)	Accepted	15 ms	0 KB

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;

    for (int i = 0, a, b; i < n; i++)
    {
        cin >> a >> b;
        if (a < b && b - a > 1)
            count++;
    }

    cout << count << endl;
}
