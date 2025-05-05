#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> words(n);

    for(int i = 0; i < n; i++) {
        cin >> words[i];
    }

    for(string s : words) {
        int size = s.size();
        
        if(size > 10) {
            cout << s[0] << size - 2 << s[size - 1] << endl;
        }
        else {
            cout << s << endl;
        }
    }
}