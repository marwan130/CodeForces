#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> input(n);
    int untreated = 0;

    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int officers = 0;
    for(int i = 0; i < n; i++) {
        officers += input[i];
        if(officers < 0) {
            untreated++;
            officers = 0;
        }
    }
    cout << untreated;
}