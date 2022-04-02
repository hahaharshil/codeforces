//https://codeforces.com/problemset/problem/1399/A
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        vector<int> v;

        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

	sort(v.begin(),v.end());
        int lastElement = v[0], count = 0;

        for (int j = 1; j < n; j++)
        {
            if (v[j] != lastElement)
            {
                count++;
            }
            lastElement = v[j];
        }
        if (count > 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
