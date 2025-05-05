#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> input(n);

    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    for(int i = 0; i < n; i++) {
        int minDist, maxDist;

        if(i == 0) {
            minDist = abs(input[1] - input[0]);
            maxDist = abs(input[n - 1] - input[0]);
        } 
        else if(i == n - 1) {
            minDist = abs(input[n - 1] - input[n - 2]);
            maxDist = abs(input[n - 1] - input[0]);
        } 
        else {
            minDist = min(abs(input[i] - input[i - 1]), abs(input[i + 1] - input[i]));
            maxDist = max(abs(input[i] - input[0]), abs(input[n - 1] - input[i]));
        }

        cout << minDist << " " << maxDist << endl;
    }
}