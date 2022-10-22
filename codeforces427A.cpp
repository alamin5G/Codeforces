/**
 * @file codeforces427A.cpp
 * see the problem - https://codeforces.com/problemset/problem/427/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-10-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int c=0;
    int keep=0;
    while(n--){
        int a;
        cin >> a;
        
        if(a>=1){
            keep += a;
        }else{
            keep = keep +a;
            if(keep<0){
                c++;
                keep=0;
            }
        }
    }
    cout << c <<endl;

    return 0;
}
