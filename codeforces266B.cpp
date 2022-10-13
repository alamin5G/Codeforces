/**
 * @file codeforces266B.cpp
 * see the problem - https://codeforces.com/problemset/problem/266/B
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    cin >> n >> t;
    char c[n];
    char d[n];
    
    for(int i=0; i<n; i++){
        cin >> c[i];
        d[i] = c[i];
        
    }
    
    for(int i=0; i<t; i++){
        for(int j=1; j<n; j++){
            if(c[j-1]=='B' && c[j]=='G'){
                char boy = d[j-1];
                d[j-1] = d[j];
                d[j] = boy;
            }
        }
        for(int k=0; k<n; k++){
            c[k] = d[k];
        }
    }
    for(int i=0; i<n; i++){
        cout << c[i];
    }
    cout << endl;
    return 0;
}