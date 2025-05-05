#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> values(n);

    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }

    sort(values.rbegin(), values.rend());

    int sum = 0;
    int total = 0;
    for (int i = 0; i < n; ++i) {
        total += values[i];
    }

    int count = 0;
    while (sum <= total / 2) {
        sum += values[count];
        count++;
    }

    cout << count;
}