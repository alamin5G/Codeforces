/**
 * @file codeforces1676A.cpp
 * see the main problem - https://codeforces.com/problemset/problem/1676/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2023-01-09
 *
 * @copyright Copyright (c) 2023
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
        string s;
        cin >> s;
        int sum1= 0;
        int sum2 = 0;
        for(auto i=0; i<s.length(); i++){
            if(i<3){
                int c = s.at(i)-0;
                sum1 += c;
            }else{
                int c = s.at(i)-0;
                sum2 += c;
            }
        }

        if(sum1 == sum2){
            cout << "YES" << endl;
        }else{
            cout << "NO"  << endl;
        }
    }

    return 0;
}