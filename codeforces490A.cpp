/**
 * @file codeforces490A.cpp
 * see the problem - https://codeforces.com/problemset/problem/490/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vi;
    int z;
    int a =0, b=0, c=0;
    int one[5002];
    int two[5002];
    int three[5002];
    for(auto i=0; i<n; i++){
        cin >> z;
        vi.push_back(z);
        if(z==1){
            one[a]=i;
            a++;
        }else if(z==2){
            two[b] = i;
            b++;
        }else{
            three[c] =i;
            c++;
        }
    }
   
    int min = (a<b)?((a<c)?(a):(c)):((b<c)?(b):(c));

    
    cout << min << endl;
    for(auto i=0; i<min; i++){
            cout << one[i]+1 << " " << two[i]+1 << " " << three[i]+1  << endl;
    }


    return 0;
}