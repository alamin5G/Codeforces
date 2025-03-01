/**
 * @file codeforces1154A.cpp
 * see the problem - https://codeforces.com/problemset/problem/1154/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 #include <bits/stdc++.h>
 using namespace std;
 int main(){
    vector<int> vi(4);
    for(auto i=0; i<4; i++){
        cin >> vi[i];
    }
    sort(vi.begin(), vi.end());
    int c = vi[3]-vi[0];
    int b = vi[2]-c;
    int a = vi[0]-b;

    cout << a << " " << b <<  " " << c <<endl;

    return 0;
 }