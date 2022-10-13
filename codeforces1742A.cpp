/**
 * @file 1742contest.cpp
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
    int a, b, c;
    while(n--){
        cin >> a >> b >> c;
        if(a == (b+c) || b == (a+c) || c == (a+b)){
            cout << "YES" << endl;
        }else{
            cout << "NO"  << endl;
        }
    }

    return 0;
}