#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int y, w;
    cin >> y >> w;

    int max_val = max(y, w);
    int favorable = 6 - max_val + 1;
    int total = 6;

    int g = gcd(favorable, total);  
    favorable /= g;
    total /= g;

    cout << favorable << "/" << total << endl;
    return 0;
}


/* 
probability = (6 + max(y, w) - 1) / 6

*/