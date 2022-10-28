/**
 * @file codeforces1367B.cpp
 * see the problem - https://codeforces.com/problemset/problem/1367/B
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin >> n;
        int a;
        vector<int> vi;
        for(auto i=0; i<n; i++){
            cin>> a;
            vi.push_back(a);
        }

        int even=0, odd=0, ok=0;
        for(auto i=0; i<vi.size(); i++){
            if(i%2==0){
                if(vi[i]%2==0){
                    ok++;
                }else{
                    odd++;
                }
            }else{
                if(vi[i]%2==1){
                    ok++;
                }else{
                    even++;
                }
            }
        }

        if(n==ok){
            cout << "0" << endl;
        }else if(odd==even){
            cout << odd << endl;
        }else{
            cout << "-1" << endl;
        }
    }

    return 0;
}