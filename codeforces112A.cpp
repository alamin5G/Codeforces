/**
 * @file codeforces112A.cpp
 * see the porblem - https://prnt.sc/LqvhbnCbVBhO
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    string first, last;
    cin >> first;
    cin >> last;
    string one, two;
    

    if(strcasecmp(first.c_str(), last.c_str())<0){
        cout << "-1" <<endl;
    }else if(strcasecmp(first.c_str(), last.c_str())==0){
        cout << "0" << endl;
    }else{
        cout << "1" << endl;
    }

    return 0;
}