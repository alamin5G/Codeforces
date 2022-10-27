/**
 * @file codeforces1399A.cpp
 * see the problem - https://codeforces.com/problemset/problem/1399/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-25
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (auto i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        bool yes = true;
        for (auto i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] >1)
            {
                yes = false;
                break;
            }
        }

        if (yes)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}