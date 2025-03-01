/**
 * @file codeforces1742C.cpp
 * 
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
    int t;
    cin >> t;
    while(t--){
        cout << endl;
        char a[8][8];
        bool bTrue = false;
        for(auto i=0; i<8; i++){
            for(auto j=0; j<8; j++){
                cin >> a[i][j];
            }
        }

        int max = 0; 
        for(auto i=0; i<8; i++){
            int c=0; 
            for(auto j=0; j<8; j++){
                
                if(a[i][j]=='R'){
                    c++;
                }else if(a[i][j]=='B'){
                    c--;

                }
                
                /*if(c==7 && ((i==7 && j==7 && a[i][j]=='R') || (j==7 && a[i][j]=='R'))){
                    bTrue = false;
                }else if(c<7 && ((i==7 && j==7 && a[i][j]=='B')|| (j==7 && a[i][j]=='B'))){
                    bTrue = true;
                }*/
                if(c==8){
                    max = c;
                    bTrue = false;
                }else{
                    bTrue = true;
                }
            }
        }

        if(max == 8){
            cout << "R" << endl; 
        }else{
            cout << "B" << endl;
        }

    }

    return 0;
}