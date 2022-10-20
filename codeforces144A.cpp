/**
 * @file codeforces144A.cpp
 * see the problem - https://codeforces.com/problemset/problem/144/A
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
    cin>> n;
    vector<int> a(n);
    for(auto i=0; i<n; i++){
        cin >> a[i];
    }

    int len = a.size();

    int min=999999999, pos;
    for(auto i=0; i<n; i++){
        if(a[i]<=min){
            min=a[i];
            pos = i;
        }
    }
    
    int max=-1, p;
    for(auto i=0; i<n; i++){
        if(a[i]>max){
            max=a[i];
            p = i;
        }
    }
    if(p > pos){
        pos++;
    }
    int step = p+len-pos-1;
    cout <<step <<endl;
    
    

    return 0;
}