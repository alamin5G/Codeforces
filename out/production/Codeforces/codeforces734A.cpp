/**
 * @file codeforces734A.cpp
 * see the problem - https://codeforces.com/problemset/problem/734/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int anton=0, danik=0;
    char ch[n];
    for(auto i=0; i<n; i++){
        cin >> ch[i];
         if(ch[i]=='A'){
            anton++;
        }else{
            danik++;
        }
    }

    if(anton==danik){
        cout << "Friendship" <<endl;
    }else if(anton>danik){
        cout << "Anton" <<endl;
    }else{
        cout << "Danik" <<endl;
    }


    return 0;
}