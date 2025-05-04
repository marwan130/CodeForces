#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;
    vector<pair<char, int>> input(n);

    long long icecreams = x;
    int distressed = 0;

    for(int i = 0; i < n; i++) {
        cin >> input[i].first >> input[i].second;

        if(input[i].first == '+') {
            icecreams += input[i].second;
        }
        else {
            if(input[i].second > icecreams) {
                distressed++;
            }
            else {
                icecreams -= input[i].second;
            }
        }
    }

    cout << icecreams << " " << distressed;

}