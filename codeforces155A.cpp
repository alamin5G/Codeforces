/**
 * @file codeforces155A.cpp
 * see the problem - https://codeforces.com/problemset/problem/155/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a;
    int max=-1, min=1000000; 
    int c=-1;
    int d = -1;
    for(auto i=0; i<n; i++){
        cin >> a;
        if(a<min){
            min = a;
            //50
            //1
            c++;
        }
        if(a>max){
            max = a;
            d++;
            //200
            //1
        }

    }
    cout << c + d <<endl;
    return 0;
}