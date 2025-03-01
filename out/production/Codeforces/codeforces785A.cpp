/**
 * @file codeforces785A.cpp
 * see the problem - https://codeforces.com/contest/785/problem/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum=0;
    while(n--){
        string s;
        cin >> s;

        if(s=="Tetrahedron"){
            sum += 4;
        }else if(s=="Cube"){
            sum += 6;
        }else if(s=="Octahedron"){
            sum += 8;
        }else if(s=="Dodecahedron"){
            sum += 12;
        }else if(s=="Icosahedron"){
            sum += 20;
        }
    }
    cout << sum << endl;
    return 0;
}
