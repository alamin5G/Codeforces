/**
 * @file codeforces1433A.cpp
 * @author Md. Alamin (alamin5g@yahoo.com)
 * https://codeforces.com/problemset/problem/1433/A
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2023-01-01
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string x;
        cin >> x;

        char c = x.at(0);
        int y = c - '0';


        int count = 1;
        for(auto i=1; i<y; i++){
            count = count + 10;
        }


        if(x.length()==2){
            count += 2;
        }else if(x.length()==3){
            count += 5;
        }else if(x.length()==4){
            count += 9;
        }

        cout << count << endl;
        

        
    }

    return 0;
}