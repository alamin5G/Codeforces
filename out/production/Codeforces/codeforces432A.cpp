/**
 * @file codeforces432A.cpp
 * see the problem - https://codeforces.com/problemset/problem/432/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int c=0; 
    vector<int> vi(n);
    for(auto i=0; i<n; i++){
        cin >> vi[i];
    }
    sort(vi.begin(), vi.end());
    for(auto i=0; i<vi.size(); i++){
        if(vi.at(i)>k){
            c++;
        }
    }
    if(c<=vi.size()){
        
    }
    for(auto u : vi){
        cout << u << " ";
    }

    return 0;
}