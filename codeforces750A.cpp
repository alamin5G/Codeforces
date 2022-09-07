/**
 * @file codeforces750A.cpp
 * see the problem - https://codeforces.com/problemset/problem/750/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int p, t;
    cin >> p >> t;
    int sum = 0;
    int solve=0;
    for(auto i=1; i<=p; i++){
        sum += i*5;
        if((sum+t)<=240){
            solve++;
        }else{
            break;
        }
    }
    cout << solve << endl;

    return 0;
}