#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int, int>> input(1);
    cin >> input[0].first >> input[0].second;
    int n = input[0].first;
    int h = input[0].second;
    vector<int> people(n);
    int res = 0;

    for(int i = 0; i < n; i++) {
        cin >> people[i];
        if(people[i] <= h) {
            res += 1;
        }
        else {
            res += 2;
        }
    }
    cout << res;
}