/**
 * @file codeforces581A.cpp
 * see the problem - https://codeforces.com/problemset/problem/581/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int dayWithColor;
    int dayWithSameItem;
    int temp;
    if(a>b){
        dayWithColor = b;
        dayWithSameItem = a - b;
        dayWithSameItem /= 2;
    }else{
        dayWithColor = a;
        dayWithSameItem = b - a;
        dayWithSameItem /= 2;

    }

    cout << dayWithColor << " " << dayWithSameItem << endl;

    return 0;
}