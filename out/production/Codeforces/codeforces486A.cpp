/**
 * @file codeforces486A.cpp
 * https://codeforces.com/problemset/problem/486/A
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
    long long n;
    cin >> n;
    double x = ceil(n/2.00);
    long long oddSum = x;
    oddSum = oddSum*oddSum;
    long long evenSum = n/2;
    evenSum = evenSum*(evenSum+1);
    cout << evenSum - oddSum << endl;
    return 0;
}