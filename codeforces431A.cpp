/**
 * @file codeforces431A.cpp
 * see the problem - https://codeforces.com/problemset/problem/431/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2023-01-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d;
    string s;
    int sum = 0; 
    cin >> a >> b >> c >> d;
    cin >> s;
    for(auto i=0; i<s.length(); i++){
        char q = s.at(i);
        int tmp = q - '0';
        if (tmp ==1){
            sum = sum + a;
        }else if(tmp ==2){
            sum = sum + b;
        }else if(tmp==3){
            sum = sum + c;
        }else if(tmp==4){
            sum = sum + d;
        }
    }

    cout << sum << endl;

    return 0;
}