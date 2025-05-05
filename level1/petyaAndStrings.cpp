#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

int main() {
    string a;
    string b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    int res = 0;

    if(a < b) {
        res = -1;
    }
    else if(a > b) {
        res = 1;
    }

    cout << res;
}