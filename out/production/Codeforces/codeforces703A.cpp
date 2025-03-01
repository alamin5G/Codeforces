/**
 * @file codeforces703A.cpp
 * see the problem - https://codeforces.com/problemset/problem/703/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int miska=0, chris=0;
    while(n--){
        int m, c;
        cin >> m >> c;
        if(m>c){
            miska++;
        }else if(m==c){
            continue;
        }else{
            chris++;
        }
        
    }
    if(miska>chris){
        cout << "Mishka" << endl;
    }else if(miska==chris){
        cout << "Friendship is magic!^^" << endl;
    }else{
        cout << "Chris" << endl;
    }

    return 0;
}