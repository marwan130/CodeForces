#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    getline(cin, input);  

    set<char> uniqueLetters;

    for (char ch : input) {
        if (ch >= 'a' && ch <= 'z') {
            uniqueLetters.insert(ch);
        }
    }

    cout << uniqueLetters.size();
    return 0;
}
