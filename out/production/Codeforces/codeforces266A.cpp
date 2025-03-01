/**
 * @file codeforces266A.cpp
 * see the problem - https://codeforces.com/contest/266/problem/A
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
    int n;
    cin >> n;
    string s="";
    char c;
    while(n--){
        cin >> c;
        s+=c;
    }
    int counter = 0;
    for(auto i=1; i<s.size(); i++){
        if(s[i-1]==s[i]){
            counter++;
        }
    }
    cout << counter << endl;
    
    return 0;
}