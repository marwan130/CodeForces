#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for(int i = 0; i <n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if((a && b == 1) || (a && c == 1) || (b && c == 1) || (a && b && c == 1)) {
            count++;
        }
    }
    cout << count;
}