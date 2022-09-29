/**
 * @file codeforces758A.cpp
 * see the problem - https://codeforces.com/problemset/problem/758/A
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
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(auto i=0; i<n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    
    sort(a, a+n);
    int large = a[n-1];
    int sum=0;
    for(auto i=0; i<n; i++){
        if(b[i]< large){
            int t = large-b[i];
            sum += t;
        }
    }
    cout << sum << endl;
    return 0;
}