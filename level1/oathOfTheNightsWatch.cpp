#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> input(n);

    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int mn = *min_element(input.begin(), input.end());
    int mx = *max_element(input.begin(), input.end());

    int res = 0;
    for (int i = 0; i < n; i++) {
        if (input[i] > mn && input[i] < mx) {
            res++;
        }
    }

    cout << res;
}