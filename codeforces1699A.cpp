/**
 * @file codeforces1699A.cpp
 * see the main problem - https://codeforces.com/problemset/problem/1669/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2023-01-10
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
        int a;
        cin >> a;
        if(1900<= a){
            cout << "Division 1" << endl;
        }else if(1600<=a && a<=1899){
            cout << "Division 2" << endl;
        }else if(1400<=a && a<=1599){
            cout << "Division 3" << endl;
        }else if(a <= 1399){
            cout << "Division 4" << endl;
        }
    }

    return 0;
}