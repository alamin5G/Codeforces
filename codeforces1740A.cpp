/**
 * @file codeforces1740A.cpp
 * see the problem - https://codeforces.com/contest/1740/problem/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-29
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
    int max = 100000;
    while (t--)
    {
        int n;
        cin >> n;
        int m=0;
        int count;
        int c = 0;

        for (auto num = 2; num <= max; num++)
        {
            count = 0;

            for (auto i = 2; i <= num / 2; i++)
            {
                if (num % i == 0)
                {
                    count++;
                    break;
                }
            }

            if (count == 0 && num != 1)
            {
                m = num;
                int notPrime = m + n;

                for (auto i = 2; i <= notPrime / 2; i++)
                {
                    if (notPrime % i == 0)
                    {
                        c++;
                        break;
                    }
                }
            }

            if (c != 0)
            {
                cout << m << endl;
                break;
            }
        }
    }

    return 0;
}