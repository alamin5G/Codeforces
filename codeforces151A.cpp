/**
 * @file codeforces151A.cpp
 * see the problem - https://codeforces.com/problemset/problem/151/A
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-29
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    // 1 friend = nl drink
    //  k*l = total drink; need nl drink, remain total drink -nl;
    //  need 1 d, remain c*d-1;
    //  need np gram salt, remain p-np;
    // so,
    // i have 3 friend; to make toast
    /**
     * (nl*n)<=k*l = okay,
     * (k*l) -= nl*n;
     * n<=d*c = okay
     * d*c -=n;
     * (np*n)<= p == okay
     * p -= (np*n);
     * 1
     *
     **/
    int totalDrink = k * l;
    int totalSlice = c * d;
    int count = 0;
    while ((totalDrink >= (nl * n)) && (totalSlice >= n) && (p >= (np * n)))
    {
        count++;
        ((nl * n) <= totalDrink) ? totalDrink -= nl * n : 1;
        (n <= totalSlice) ? totalSlice -= n : 1;
        ((np * n) <= p) ? p -= (np * n) : 1;
    }
    cout << count << endl;

    return 0;
}