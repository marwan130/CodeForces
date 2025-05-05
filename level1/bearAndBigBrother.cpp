#include <bits/stdc++.h>
using namespace std;

int bear(int a, int b) {
    int years = 0;

    while(a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }
    return years;
}

int main() {
    cout << bear(4, 7) << endl;
    cout << bear(4, 9) << endl;
    cout << bear(1, 1) << endl;

}

