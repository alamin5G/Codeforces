/**
 * @file codeforces467A.cpp
 * see the problem - https://codeforces.com/problemset/problem/467/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int a[t], b[t];
    for(auto i=0; i<t; i++){
        cin >> a[i] >> b[i];
    }
    int count=0; 
    for(auto i=0; i<t; i++){
        if((a[i]+2)<=b[i]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}