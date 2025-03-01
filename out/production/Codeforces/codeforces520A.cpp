/**
 * @file codeforces520A.cpp
 * see the problem - https://codeforces.com/problemset/problem/520/A
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
    int a;
    cin >> a;
    char b;
    cin >> b;
    char c[a];
    cin.getline(c, a);
    string str(c);
    str= b + str;
    transform(str.begin(), str.end(), str.begin(), ::toupper);

    sort(str.begin(), str.end());
    int len = unique(str.begin(), str.end())-str.begin();
 
    if(len>=26){
        cout << "YES" <<endl;
    }else{
        cout << "NO" <<endl;
    }

    return 0;
}