/**
 * @file codeforces1030A.cpp
 * see the problem - https://codeforces.com/problemset/problem/1030/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-30
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a;
    vector<int> vi;
    cin >> n;
    while (n--)
    {
        cin >> a;
        vi.push_back(a);
    }

    bool hard = false;
    for (auto i = 0; i < vi.size(); i++)
    {
        if (vi.at(i) == 1)
        {
            hard = true;
            break;
        }
    }

    if (hard)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }
    return 0;
}