/**
 * @file 01ceilFunction.cpp
 * ceil function
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    /**
     * 5/2 = ? 2.5 right?
     * but if it is a integer variable? 
     * then output will be 2, right?
     * is it possible to make it 3?
     * I mean no fractional, 
     * someone will get 3 and another will get 2;
     * lets come to the solution
     * */
    int a;
    cin >> a;
    int result = a/2;
    cout << "Normal int divide" << endl;
    cout << result << endl;
    cout << "After ceil() use";
    double results = ceil(a/2.00);
    //remember ceil(must have to have digit after decimal point)
    // neither this will not work;
    result = results;
    cout << result << endl;
    return 0;
}