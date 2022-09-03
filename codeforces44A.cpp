/**
 * @file codeforces44A.cpp
 * see the problem - https://codeforces.com/problemset/problem/44/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    vector<pair<string, string>> vp(n);
    for(auto i=0; i<n; i++){
        cin >> vp[i].first >> vp[i].second;
    }

    sort(vp.begin(), vp.end());
    int uniq = unique(vp.begin(), vp.end()) - vp.begin();
    cout << uniq << endl;
    return 0;
}