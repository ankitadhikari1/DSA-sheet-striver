#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

class Solution {
public:
    int LCM(int n1,int n2) {
        return n1 * n2 / gcd(n1,n2);
    }
};