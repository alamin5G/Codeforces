/**
 * @file codeforces1512A.cpp
 * see the problem - https://codeforces.com/problemset/problem/1512/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-30
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
        int big = 0;
        int index = 0;
        int b = 0, s = 0;
        for (auto i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (auto i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                if (i == 0)
                {
                    if (a[i + 1] == a[i + 2])
                    {
                        index = i;
                        break;
                    }else if(a[i] == a[i + 2]){
                        index = i+1;
                        break;
                    }
                }
                else
                {
                    if (a[i] == a[i - 1])
                    {
                        index = i + 1;
                        break;
                    }
                    else if (a[i + 1] == a[i + 2])
                    {
                        index = i;
                        break;
                    }
                }
            }
        }
    

    cout << index + 1 << endl;
}

return 0;
}