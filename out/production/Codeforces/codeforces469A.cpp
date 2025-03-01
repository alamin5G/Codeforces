/**
 * @file codeforces469A.cpp
 * see the problem - https://codeforces.com/problemset/problem/469/A
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
    int p;
    cin >> p;
    vector<int> level;
    int t;
    for(auto i=0; i<p; i++){
        cin >> t;
        level.push_back(t);
    }
    int q;
    cin >> q;
    for(auto i=0; i<q; i++){
        cin >> t;
        level.push_back(t);
    }
    sort(level.begin(), level.end());
    int unik = unique(level.begin(), level.end())-level.begin();
    

    if(unik==n){
        cout << "I become the guy." <<endl;
    }else{
        cout << "Oh, my keyboard!" <<endl;
    }

    return 0;
}