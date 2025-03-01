/**
 * @file codeforces200B.cpp
 * see the problem - https://codeforces.com/problemset/problem/200/B
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int sum;
    for(auto i=0; i<t; i++){
        int c;
        cin >> c;
        sum += c; 
    }
    double avg = sum/(t*1.00);
    cout << fixed << setprecision(12) << avg << endl;
    
    return 0;
}