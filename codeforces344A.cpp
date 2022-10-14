/**
 * @file codeforces344A.cpp
 * see the problem - https://codeforces.com/problemset/problem/344/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int c[n];
    int cnt = 1;
    for(auto i=0; i<n; i++){
        cin >> c[i];
    }
    
    for(auto i=1; i<n; i++){
       
            if(c[i-1]!=c[i]){
                cnt++;
            }
    }
    cout << cnt << endl;
    return 0;
}