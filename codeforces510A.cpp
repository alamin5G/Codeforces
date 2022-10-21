/**
 * @file codeforces510A.cpp
 * see the problem - https://codeforces.com/problemset/problem/510/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    bool first=false;
    for(auto i=1; i<=n; i++){
        for(auto j=1; j<=m; j++){
            if(i%2==1){
                cout << "#";
            }else{
                if(first){
                    if(i%2==0 && j!=1){
                        cout << ".";
                        if(j==m){
                            first = false;
                        }
                    }else{
                        cout << "#";
                    }
                }else{
                    if(i%2==0 && j!=m){
                        cout << ".";
                    }else{
                        cout << "#";
                        first = true;
                    }
                }
            }
            
        }
        cout << endl;
    }

    return 0;
}