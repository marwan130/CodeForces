#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, b, d;
    cin >> n >> b >> d;
    int sum = 0;
    int count = 0;

    for(int i = 0; i < n; i++) {
        int orangeSize;
        cin >> orangeSize;
        if(orangeSize <= b) {
            sum += orangeSize;
            if(sum > d) {
                sum = 0;
                count++;
            }
        }
    }
    cout << count;
}