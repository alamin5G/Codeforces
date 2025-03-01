/**
 * @file codeforces1353B.cpp
 * see the problem - https://codeforces.com/problemset/problem/1353/B
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-28
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
        int n, k;
        cin >> n >> k;
        int a[n],  b[n];
        int sum=0, sum2=0; 
        for(auto i=0; i<n; i++){
            cin >> a[i];
            sum+= a[i];
        }
        for(auto i=0; i<n; i++){
            cin >> b[i];
            
        }
        sort(a, a+n);
        sort(b, b+n, greater<int>());
        for(auto i=0; i<n; i++){
            if(a[i]<b[i]){
                if(k!=0){
                    swap(a[i], b[i]);
                }else{
                    break;
                }
                k--;
                
            }
        }

        for(auto i=0; i<n; i++){
            //after swap sum2;
            sum2 += a[i];
        }

        if(sum>sum2){
            cout << sum << endl;
        }else{
            cout << sum2 << endl;
        }


    }

    return 0;
}