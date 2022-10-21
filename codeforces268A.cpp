/**
 * @file codeforces268A.cpp
 * see the problem - https://codeforces.com/problemset/problem/268/A
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
    int n;
    cin >> n;
    int a[n], b[n];
    for(auto i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }
    int c=0;
    for(auto i=0; i<n; i++){
        for(auto j=0; j<n; j++){
            if(a[i]==b[j]){
                c++;
            }
        }
    }
    cout << c << endl; 

    return 0;
}