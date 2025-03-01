/**
 * @file codeforces236A.cpp
 * see the problem - https://codeforces.com/problemset/problem/236/A
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
    string s;
    cin >> s;
    int index = 0;

    sort(s.begin(), s.end());
    index = unique(s.begin(), s.end())-s.begin();
   
    if(index%2==0){
        cout << "CHAT WITH HER!" <<endl;
    }else{
        cout << "IGNORE HIM!" <<endl;
    }

    return 0;
}