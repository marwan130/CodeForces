#include <bits/stdc++.h>
using namespace std;

int main() {
    string user;
    cin >> user;
    set<char> unique;

    for(char c : user) {
        unique.insert(c);
    }

    if(unique.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    }
    else {
        cout << "IGNORE HIM!" << endl;
    }
}