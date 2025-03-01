/**
 * @file codeforces1328A.cpp
 * see the problem - https://codeforces.com/problemset/problem/1328/A
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
#define endl '\n'
int main(){
    int t; 
    cin >> t;
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        int rem = a%b;
        if(rem!=0){
            int c = b-rem;
            cout << c << endl;
        }else{
            cout << rem << endl;
        }

    }

    return 0;
}