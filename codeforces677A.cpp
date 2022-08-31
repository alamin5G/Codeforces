/**
 * @file codeforces677A.cpp
 * see the problem - https://codeforces.com/problemset/problem/677/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int f, h;
    cin >> f >> h;
    int friends[f];
    for(auto i=0; i<f; i++){
        cin >> friends[i];
    }
    int width=0;
    for(auto i=0; i<f; i++){
        if(friends[i]<=h){
            width++;
        }else{
            width+=2;
        }
    }
    cout << width << endl;
    
    return 0;
}