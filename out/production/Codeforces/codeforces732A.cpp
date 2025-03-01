/**
 * @file codeforces732A.cpp
 * see the problem - https://codeforces.com/problemset/problem/732/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, r;
    cin >> k >> r;
    int c=0; 
    int result =0;
    for(;;){
        c++;
        result = k*c;
        if(result%10==r || result%10==0){
            cout << c << endl;
            break;
        }
    }
}