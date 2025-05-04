#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int anton{0}, danik{0};
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    for(char c : s) {
        if(c == 'A') {
            anton++;
        }
        else if (c == 'D') {
            danik++;
        }
    }

    if(anton > danik) {
        cout << "Anton";
    }
    else if(anton < danik) {
        cout << "Danik";
    }
    else {
        cout << "Friendship";
    }
}