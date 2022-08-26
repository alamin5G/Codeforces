/**
 * @file codeforces118A.cpp
 * see the problem - https://codeforces.com/problemset/problem/118/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    char c = '.';
    for(auto i=0; i<s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y'){
            continue;
        }else if(s[i]>='A' && s[i] <= 'Z'){
            char l = tolower(s[i]);
            cout << c << l;
        }else{
            cout << c << s[i];
        }
    }
    cout << endl;

    return 0;
}