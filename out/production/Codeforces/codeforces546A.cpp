/**
 * @file codeforces546A.cpp
 * see the problem - https://codeforces.com/problemset/problem/546/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, n, w;
    int sum =0;
    cin >> k >> n >> w;
    for (auto i = 1; i <= w; i++)
    {
       sum += i*k;
    }
    if(sum>n){
        cout << sum-n << endl;
    }else{
        cout << "0" <<endl;
    }
    
    return 0;
}