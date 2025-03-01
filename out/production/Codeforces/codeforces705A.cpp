/**
 * @file codeforces705A.cpp
 * see the problem - https://codeforces.com/problemset/problem/705/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << "I ";
    string love = " that I love";
    string hate = " that I hate";
    for(auto i=1; i<=n; i++){
        if(i==1){
            cout << "hate";
        }else if(i%2==0){
            cout << love;
        }else if(i%2==1){
            cout << hate;
        }
    }
    cout << " it" << endl;
    return 0;
}