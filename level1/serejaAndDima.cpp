#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> input(n);
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int sereja = 0, dima = 0;
    int l = 0, r = n - 1;
    bool turn = true;  

    while(l <= r) {
        if(input[l] > input[r]) {
            if(turn) sereja += input[l];
            else dima += input[l];
            l++;
        } else {
            if(turn) sereja += input[r];
            else dima += input[r];
            r--;
        }
        turn = !turn;
    }

    cout << sereja << " " << dima << endl;
}