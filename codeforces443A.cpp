/**
 * @file codeforces443A.cpp
 * see the problem - https://codeforces.com/problemset/problem/443/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    string st;
    getline(cin, st);
    string s;
    for(auto i=0; i<st.size(); i++){
        if(st[i]>='a' && st[i]<='z'){
            char c = st[i];
            s += c;
        }
    }
    sort(s.begin(), s.end());
    int uniq = unique(s.begin(), s.end()) - s.begin();
    cout << uniq << endl;



    return 0;
}