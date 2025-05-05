#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> scores(n);
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int kth = scores[k - 1];

    for(int i = 0; i < n; i++) {

        if(scores[i] >= kth && scores[i] > 0) {
            count++;
        }
    }

    cout << count;
}