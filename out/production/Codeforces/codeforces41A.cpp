/**
 * @file codeforces41A.cpp
 * see the problem - https://codeforces.com/problemset/problem/41/A
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
int main(){
    string s, r;
    cin >> s >> r;
    reverse(s.begin(), s.end());
    if(s==r){
        cout << "YES" <<endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}