/**
 * @file codeforces59A.cpp
 * see the problem - https://codeforces.com/problemset/problem/59/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-27
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int up = 0, low = 0;
    for (auto i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            up++;
        }
        else
        {
            low++;
        }
    }
    

    if (up == low)
    {
        for (auto i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                char c = tolower(s[i]);
                cout << c;
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    else if (low > up)
    {
        for (auto i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                char c = tolower(s[i]);
                cout << c;
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    else
    {
        for (auto i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                char c = toupper(s[i]);
                cout << c;
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}