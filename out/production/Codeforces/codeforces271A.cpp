/**
 * @file codeforces271A.cpp
 * see the problem - https://codeforces.com/problemset/problem/271/A
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
    int year;
    cin >> year;

    for(;;){
        year++;
        int a = year%10;
        int b = (year/10)%10;
        int c = (year/100)%10;
        int d = (year/1000)%10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            break;
        }
    }
    cout << year << endl;
    return 0;
}