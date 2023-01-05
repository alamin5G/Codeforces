/**
 * @file codeforces1624A.cpp
 * see the problem - https://codeforces.com/problemset/problem/1624/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2023-01-06
 * 
 * @copyright Copyright (c) 2023
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
        int a[n];
        for(auto i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a, a+n);

        //How much step need to be equal 
        int stepNeeds = a[n-1] - a[0];
        cout << stepNeeds << endl;
       
    }

    return 0;
}