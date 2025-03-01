/**
 * @file codeforces472A.cpp
 * see the problem - https://codeforces.com/problemset/problem/472/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    
    if(n%2==0){
        cout << "4" << " " << n-4 << endl;
    }else{
        cout << "9" << " " << n-9 << endl; 
    }

    return 0;
}