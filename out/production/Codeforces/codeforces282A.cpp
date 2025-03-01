/**
 * @file codeforces282A.cpp
 * see the problem - https://prnt.sc/-ZU2JiKnu0sW
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int x = 0;
    string st;
    cin >> n;
    while(n--){
        cin >> st;

        if((st[0]=='+' && st[1]=='+')){
           ++x;
        }else if((st[1]=='+' && st[2]=='+')){
            x++;
        }else if((st[0]=='-' && st[1]=='-')){
            --x;
        }else if((st[1]=='-' && st[2]=='-')){
            x--;
        }
    }
    cout << x << endl;
    return 0;
}