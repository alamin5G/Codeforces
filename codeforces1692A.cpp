/**
 * @file codeforces1692A.cpp
 * see the problem - https://codeforces.com/problemset/problem/1692/A
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
        int a, b, c, d;
        cin >> a >> b >> c >> d;


        
        int arr[] = { a, b, c, d};
        int count=0;
        for(auto i=1; i<4; i++) {
            if(arr[0]<arr[i]){
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}