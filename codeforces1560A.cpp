/**
 * @file codeforces1560A.cpp
 * see the problem - https://codeforces.com/problemset/problem/1560/A
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
int main()
{
   
   int t; 
   cin >> t;
   while(t--){
    int k;
    cin>> k;
    for(auto i=1; ; i++){
        if(i%3==0 || i%10==3){
            continue;
        }else{
            k--;
            if(k==0){
                cout << i << endl;
                break;
            }
        }
    }
   }
    return 0;
}