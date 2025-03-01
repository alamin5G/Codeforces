/**
 * @file codeforces339A.cpp
 * see the problem - https://prnt.sc/4Ep9G1UzFDIR
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<char> vs;
    vector<char> vc;
    int flag=0;
    int vst =0;
    int vch =0;
    for(auto i=0;i<s.size(); i++){
        if(s[i] !='+'){
            vs.push_back(s[i]);
        }else{
            vc.push_back(s[i]);
        }
    }

    sort(vs.begin(), vs.end());
   
    for(auto i=0; i<s.size(); i++){
        if(flag==0){
            cout << vs.at(vst);
            vst++;
            flag=1;
        }else{
            cout << vc.at(vch);
            vch++;
            flag = 0;
        }
    }
    cout << endl;

    return 0;
}