#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;
    vector<int> numbers;
    stringstream ss(input);
    string temp;
    while (getline(ss, temp, '+')) {
        numbers.push_back(stoi(temp));
    }

    for(int i = 0; i < numbers.size(); i++) {
        for(int j = 0; j < numbers.size() - i - 1; j++) {
            if(numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << numbers[0];
    for(int i = 1; i < numbers.size(); i++) {
        cout << '+' << numbers[i];
    }
}