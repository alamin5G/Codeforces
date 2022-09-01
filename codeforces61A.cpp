/**
 * @file codeforces61A.cpp
 see the problem - https://codeforces.com/problemset/problem/61/A
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
    string st, s2;
    cin >> st; 
    cin >> s2;

    for(auto i=0; i<st.size(); i++){
        if(st[i]==s2[i]){
            cout << "0";
        }else{
            cout << "1";
        }
    }
    cout << endl;

    return 0;
}