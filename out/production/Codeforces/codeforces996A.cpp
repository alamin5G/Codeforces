/**
 * @file codeforces996A.cpp
 * see the problem - https://codeforces.com/problemset/problem/996/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    int hundred = a/100;
    int twenty = (a%100)/20;
    int ten = ((a%100)-twenty*20)/10;
    int five = (((a%100)-twenty*20)-ten*10)/5;
    int one = ((((a%100)-twenty*20)-ten*10)-five*5)/1;
    cout << hundred + twenty + ten + five + one << endl;
    return 0;
}