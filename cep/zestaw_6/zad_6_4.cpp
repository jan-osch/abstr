//
// Created by Janusz Grzesik on 01.12.2016.
//
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> tab;

    int x;
    while (true) {
        cout << "Podaj element tablicy: ";
        cin >> x;
        if (x == 0) break;
        tab.push_back(x);
    }

    multiset<int> mySet(tab.begin(), tab.end());

    for (auto i = mySet.begin(); i != mySet.end(); i++) {
        cout << *i << endl;
    }

    return 0;
}
