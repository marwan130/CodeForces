#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> input(4);
    string s;
    int res = 0;
    for(int i = 0; i < 4; i++) {
        cin >> input[i];
    }
    cin >> s;

    for(char c : s) {
        int num = c - '0';
        res = res + input[num - 1];
    }

    cout << res;
}