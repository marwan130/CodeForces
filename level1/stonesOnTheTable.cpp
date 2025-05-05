#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string input;
    cin >> n >> input;
    vector<char> letters(input.begin(), input.end());
    int takeOut = 0;

    for(int i = 0; i < n; i++) {
        if(letters[i] == letters[i + 1]) {
            takeOut++;
        }
    }
    cout << takeOut;
}