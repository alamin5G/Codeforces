/**
 * @file codeforces71A.cpp
 * see the problem - https://prnt.sc/l_zQVCZVsQFD
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, len;
    cin >> n;
    string v[n];
    string o[n];
    string first, last, combined;
    int number;
    for(auto i=0; i<n; i++){
        cin >> v[i];
    }

    for(auto j=0; j<n; j++){
        if(v[j].size() > 10){
                first = v[j].at(0);
                last = v[j].at(v[j].size()-1);
                len = (v[j].size()-2);
                combined = first + to_string(len) + last;
                o[j] = combined;
        }else{
            o[j] = v[j];
        }
    }

    for(auto j = 0; j<n; j++){
        cout << o[j] << endl;
    }

    return 0;
}