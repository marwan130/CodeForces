#include <bits/stdc++.h>
using namespace std;

int main() {
    int lower = 0;
    int upper = 0;
    string word;
    cin >> word;

    for(char c : word) {
        if(islower(c)) {
            lower++;
        }
        else {
            upper++;
        }
    }
    
    if(upper > lower) {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    }
    else {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    }
    
    cout << word;
}