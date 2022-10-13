/**
 * @file codeforces110A.cpp
 * see the problem - https://codeforces.com/contest/110/problem/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int c=0;
    for(auto i=0; i<s.size(); i++){
        if(s[i]=='4'|| s[i]=='7'){
            c++;
        }
    }
    
    if(c==7 || c==4){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}