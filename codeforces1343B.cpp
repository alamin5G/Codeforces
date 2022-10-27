/**
 * @file codeforces1343B.cpp
 * see the problem - https://codeforces.com/problemset/problem/1343/B
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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int a[n];
        int b[n];
        long long sumA=0;
        long long sumB=0;
        if (n % 2 != 0 || n%4!=0)
        {
            cout << "NO" <<endl;
             continue;
             
        }
        else if(n<=2)
        {
            cout << "NO" <<endl;
            continue;
        }else {
            long long c=0, d=0;
            for(auto i=2; i<=n; i+=2){
                a[c] = i;
                sumA += i;
                c++;
            }
            for(auto i=1; i<=n; i+=2){
                b[d] = i;
                sumB += i;
                d++;
            }
            
            if(sumA>sumB){
                long long tmp = sumA - sumB;
                tmp = tmp + b[(n/2)-1];
                b[(n/2)-1] = tmp;
                
            }

            cout << "YES" << endl;
            for(auto i =0; i<n/2; i++){
                cout << a[i] << " ";
            }
            for(auto i =0; i<n/2; i++){
                cout << b[i] << " ";
            }
            

            cout << endl;

        }
    }

    return 0;
}