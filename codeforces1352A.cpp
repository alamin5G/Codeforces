/**
 * @file codeforces1352A.cpp
 * see the problem - https://codeforces.com/problemset/problem/1352/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vi;
        
        if(n%10!=0){
            vi.push_back(n%10);
        }
        int remain = n%10;
        n -= remain;
        if(n%100!=0){
            vi.push_back(n%100);
        }
        remain = n%100;
        n -= remain;
        if(n%1000!=0){
            vi.push_back(n%1000);
        }
        remain = n%1000;
        n-=remain; 
        if(n%10000!=0){
            vi.push_back(n%10000);
        } 

        if(n>=10000 && n%10000==0){
            vi.push_back(n);
        }

        cout << vi.size() << endl;
        cout << vi[0];
        for(auto i=1; i<vi.size();i++){
            cout <<  " " <<  vi[i];
        }
        cout << endl;
        vi.clear();

    }
    return 0;
}