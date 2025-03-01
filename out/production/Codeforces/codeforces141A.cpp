/**
 * @file codeforces141A.cpp
 * see the problem - https://codeforces.com/problemset/problem/141/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-21
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string guest, host, shuffle;
    cin >> guest;
    cin >> host;
    cin >> shuffle;
    string match = guest+host;
    sort(match.begin(), match.end());
    sort(shuffle.begin(), shuffle.end());
    if(match==shuffle){
        cout << "YES" <<endl;
    }else{
        cout << "NO" <<endl;
    }

    return 0; 
}