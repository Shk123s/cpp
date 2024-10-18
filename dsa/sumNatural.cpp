#include <bits/stdc++.h>
using namespace std;

 int recursionSumofNaturalNumber(int n) {

    if(n == 0 ){
        return 0;
    }

    return recursionSumofNaturalNumber(n-1)+n; 

 }


int main () {

    int a ;
    a = recursionSumofNaturalNumber(5);
    cout << a ;
    return 0;
}