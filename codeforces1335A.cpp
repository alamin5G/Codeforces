/**
 * @file codeforces1335A.cpp
 * see the problem - https://codeforces.com/problemset/problem/1335/A
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
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n!=1 && n!=2){
            long long int d = n/2;
            long double div = n/2.0;
            if(div==d){
                cout << d-1 <<endl;
            }else{
                cout << d << endl;
            }
            
        }else{
            cout << "0" <<endl;
        }
    }

    return 0;
}