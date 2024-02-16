/**
 * @file codeforces1472.cpp
 * see the problem - https://codeforces.com/problemset/problem/1472/B
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-11-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;

    cin >> t;
    int a[t];
    for(auto i=0; i<t; i++){
        cin >> a[i];
    }

    for(auto i=0; i<t-1; i++){
        int p = a[i]+1;
        if(p== a[t-1]){
            break;
        }
    }

    return 0;
}