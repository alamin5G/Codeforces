/**
 * @file codeforces1409A.cpp
 * see the problem - https://codeforces.com/problemset/problem/1409/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-18
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
        int a, b;
        cin >> a >> b;
        if(a==b){
            cout << "0" << endl;
        }else if(a < b && b <10){
            cout << "1" << endl;
        }else if(a > b && a < 10){
            cout << "1" << endl;
        }else if(a<b){
            a = b - a;
            int rem = a%10;
            a = a/10;
            if(rem>0){
                cout << a+1 <<endl;
            }else{
                cout << a << endl;
            }
        }else{
            a = a-b;
            int rem = a%10;
            a = a/10;
            if(rem>0){
                cout << a+1 <<endl;
            }else{
                cout << a << endl;
            }
        }
    }

    return 0;
}