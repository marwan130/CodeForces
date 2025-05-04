#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> t(n);

    vector<int> prog, math, pe;

    for(int i = 0; i < n; i++) {
        cin >> t[i];
        if(t[i] == 1) {
            prog.push_back(i + 1);
        }
        else if(t[i] == 2) {
            math.push_back(i + 1);
        }
        else {
            pe.push_back(i + 1);
        }
    }

    int teams = min(min(prog.size(), math.size()), pe.size());

    cout << teams << endl;

    for(int i = 0; i < teams; i++) {
        cout << prog[i] << " " << math[i] << " " << pe[i] << endl;
    }

}