/**
 * @file codeforces723A.cpp
 * see the problem - https://codeforces.com/problemset/problem/723/A
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
    int x, y, z;
    cin >> x >> y >> z;
    int a[] = {x, y, z};
    sort(a, a+3);
    int middle = a[1];
    int result = abs(middle-a[0])+abs(middle-a[2]);
    cout << result <<endl;

return 0;
}