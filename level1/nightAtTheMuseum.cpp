#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    int pointer = 0;
    int counter = 0;

    for(char c : input) {
        int ascii = (int)c - 97;
        int clockwise = abs(ascii - pointer);
        int antiClockwise = 26 - clockwise;
        counter += min(clockwise, antiClockwise);
        pointer = ascii;
    }
    
    cout << counter;

}