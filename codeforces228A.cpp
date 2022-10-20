/**
 * @file codeforces228A.cpp
 * see the problem - https://codeforces.com/problemset/problem/228/A
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
    int a[4];
    for(auto i=0; i<4; i++){
        cin >> a[i];
    }
    int c=0;
    sort(a, a+4);
    for(auto i=0; i<4-1; i++){
        if(a[i]==a[i+1]){
            c++;
        }
    }
    cout << c << endl;
    return 0;
}