#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    map<int, int> map;

    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }

    for(int i = 0; i < n; i++) {
        int num = p[i];
        map[num] = i + 1;
    }

    for(const auto& pair : map) {
        cout << pair.second << " ";
    }
}