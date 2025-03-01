/**
 * @file codeforcs158A.cpp
 * see the problem - https://prnt.sc/w0cHLyTBkhQm
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
int main()
{
    int n, k, d;
    int index, flag = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (auto i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (v.at(k-1) > 0)
    {
        d = v.at(k-1);
        for (auto j = k; j < n; j++)
        {
            if (v.at(j) == d)
            {
                index = j;
                flag++;
            }
        }

        if (flag == 0)
        {
            cout << k << endl;
        }
        else
        {
            cout << index + 1 << endl;
        }
    }
    else
    {
        flag=0;
        for(auto i=0; i<k; i++){
            if(v.at(i)>0){
                flag++;
            }
        }
        if(flag!=0){
            cout << flag << endl;
        }else{
            cout << "0" << endl;
        }
    }

    return 0;
}