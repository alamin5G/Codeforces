/**
 * @file codeforces116A.cpp
 * see the problem - https://codeforces.com/contest/116/problem/A
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
    int n;
    cin >> n;
    int a, b, remain=0;
    int max=0;
    while(n--){
        cin >> a >> b;
        remain-=a;
        remain+=b;
        if(remain>max){
            max = remain;
        }
    }
    cout << max << endl;
    return 0;
}