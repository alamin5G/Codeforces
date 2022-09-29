/**
 * @file codeforces1367A.cpp
 * see the problem - https://codeforces.com/problemset/problem/1367/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-29
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
        string st;
        cin >> st;

        if (st.size() > 2)
        {
            for (auto i = 1; i < st.size()-1; i++)
            {
                if (st.at(i+1) == st.at(i))
                {
                    st.erase(st.begin() + i);
                }
            }
            cout << st << endl;
        }else{
            cout << st << endl;
        }

    }
    return 0;
}
