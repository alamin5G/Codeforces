/**
 * @file codeforces381A.cpp
 * see the problem - https://prnt.sc/4KHT2D7kV2C4
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
    
    int n, i;
    cin >> n;
    vector<int> v(n);
    for(auto i=0; i<n; i++){
        cin >> v[i];
    }

    int sereja = 0, dima=0, turn=1;

    while(!v.empty()){
        if(turn==1){
            if(v[0]>v.back()){
                sereja += v[0];
                v.erase(v.begin());
            }else{
                sereja += v.back();
                v.pop_back();
            }
            turn = 0;
        }else{
            if(v[0] > v.back()){
                dima += v[0];
                v.erase(v.begin());
            }else{
                dima += v.back();
                v.pop_back();
            }
            turn = 1;
        }
    }
    
    cout << sereja << " " << dima << endl;
    return 0;
}