/**
 * @file codeforces263A.cpp
 * see the problem - https://codeforces.com/problemset/problem/263/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-09
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x = 0;
    int sum = 0;
    for(auto i=1; i<=5; i++){
        for(auto j=1; j<=5; j++){
            cin >> x;
            if(x==1){
                sum = abs(i-3)+ abs(j-3);
            }
        }
    }
    cout << sum << endl;
    return 0;
}
