//
// Created by Janusz Grzesik on 01.12.2016.
//
#include <iostream>
#include <vector>

using namespace std;

bool isEven(int number) {
    return number % 2 == 0;
}

bool firstEven(int first, int second) {
    bool isFirst = isEven(first);
    bool isSecond = isEven(second);

    if(isFirst && !isSecond) return true;
    if(!isFirst && isSecond) return false;

    return first < second;
}

int main() {
    vector<int> tab;

    int x;
    while (true) {
        cout << "Podaj element tablicy: ";
        cin >> x;
        if (x == 0) break;
        tab.push_back(x);
    }

    sort(tab.begin(), tab.end(), firstEven);

    for (int i = 0; i < tab.size(); i++) {
        cout << tab[i] << endl;
    }

    return 0;
}
