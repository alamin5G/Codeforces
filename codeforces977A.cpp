/**
 * @file codeforces977A.cpp
 * see the problem - https://codeforces.com/problemset/problem/977/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, n;
    cin >> x >> n;
    for(auto i=0; i<n; i++){
        
        if(x%10==0){
            string s = to_string(x);
            s.pop_back();
            x = stoi(s);
        }else{
            x--;
        }
    }

    cout << x << endl;

    return 0;
}