#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int, int>> input(1);
    cin >> input[0].first >> input[0].second;
    int i = 1;
    int paid = 0;
    while(true) {
        paid = input[0].first * i;
        int leastSignificant = paid % 10;
        if(leastSignificant == input[0].second || leastSignificant == 0) {
            cout << i;
            break;
        }
        i++;
    }
}