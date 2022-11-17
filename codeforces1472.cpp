/**
 * @file codeforces1472.cpp
 * see the problem - https://codeforces.com/problemset/problem/1472/B
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-11-17
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
        int n;
        cin >> n;
        vector<int> vi(n);
        for(auto i=0; i<n; i++){
            cin >> vi[i];
        }

        int sum=1; 
        int total = accumulate(vi.begin(), vi.end(), sum)-1;
        if(total%2!=0){
            cout << "NO" << endl;
        }else{
            if(n%2==1 && total%n==0){
                cout << "NO" << endl;
            }else{ 
                cout << "YES" << endl;
            }
        }

    }

    /**
     * though this code is accepted to the codeforces, but it should not be! 
     * because this code has error which I found while manual testing
     * for N=11 size elements (1 2 1 2 2 2 2 2 2 2 2)
     * This code can not be divided into equal for the bob and his brother. 
    */

    return 0;
}