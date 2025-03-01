/**
 * @file codeforces148A.cpp
 * see the problem - https://codeforces.com/problemset/problem/148/A
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
int main(){
    int k, l, m, n, d, c=0;
    cin >> k >> l >> m >> n >> d;
    for(auto i=1; i<=d; i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            c++;
        }
    }
    cout << c << endl;

    return 0;
}