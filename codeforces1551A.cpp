/**
 * @file codeforces1551A.cpp
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2023-01-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        if(n%3==0){
            cout << n/3 << " " << n/3 << endl;
            continue;
        }else if(n%3==1){
            cout << (n/3)+1 << " " << n/3 << endl;
            continue;
        }else{
            cout << n/3 << " " << (n/3)+1 << endl;
        }
    }

    return 0;
}