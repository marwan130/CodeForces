#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    unordered_map<int, int> freq;
    int max_freq = 0;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
        max_freq = max(max_freq, freq[x]);
    }
 
    if (max_freq <= (n + 1) / 2)
        cout << "YES";
    else
        cout << "NO";
        
}