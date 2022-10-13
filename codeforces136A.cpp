/**
 * @file codeforces136A.cpp
 * see the problem - https://codeforces.com/problemset/problem/136/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-13
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
    int v;
    for(auto i=0; i<n; i++){
        cin >> v;
        a[v-1] = i;
    }

    cout << a[0]+1;
    for(auto i=1; i<n; i++){
        cout << " "<< a[i]+1 ;
    }
    cout << endl;

    return 0;
}