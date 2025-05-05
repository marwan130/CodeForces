#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> snacks(n + 1, 0);  
    int current = n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        snacks[x] = 1;

        vector<int> today;
        while (current >= 1 && snacks[current]) {
            today.push_back(current);
            current--;
        }

        for (int val : today)
            cout << val << " ";
        cout << endl;
    }

}