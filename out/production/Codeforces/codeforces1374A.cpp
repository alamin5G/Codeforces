/**
 * @file codeforces1374A.cpp
 * see the problem - https://codeforces.com/problemset/problem/1374/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        int x, y, n;
        cin >> x >> y >> n;
        int temp = n/x;
        temp = (temp*x)+y;
        if(temp>n){
            temp = temp-x;
        }
        cout << temp << endl;
    }

    return 0;
}