/**
 * @file codeforces1742B.cpp
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
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin>> n;
        int a[n];
        for(auto i=0; i<n; i++){
            cin>> a[i];
        }
        sort(a, a+n);
        int c=0;
        for(auto i=1; i<n; i++){
            if(a[i-1]<a[i] ){
                c++;
            }
        }
        if(c==n-1){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }

    return 0;
}