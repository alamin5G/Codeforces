/**
 * @file codeforces791A.cpp
 * see the problem - https://codeforces.com/problemset/problem/791/A
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
    int limak, bob;
    int year=0;
    cin >> limak >> bob;
   
    while(bob>=limak){
        year++;
        limak = limak*3;
        bob =  bob*2;
    }

    cout << year << endl;

    return 0;
}