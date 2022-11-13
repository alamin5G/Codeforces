/**
 * @file codeforces32B.cpp
 * see the problem - https://codeforces.com/problemset/problem/32/B
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-11-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin >> st;
    string s="";
    int len = st.size();
    int i=0;
    while(len>0){
        if(st[i]=='.'){
            s += "0";
            len=len-1;
            i++;
        }else if(st[i]=='-' && st[i+1]=='.'){
            s+="1";
            len-=2;
            i+=2;
        }else if(st[i]=='-' && st[i+1]=='-'){
            s+="2";
            len-=2;
            i+=2;
        }
        
    }

    cout << s << endl;

    return 0;
}