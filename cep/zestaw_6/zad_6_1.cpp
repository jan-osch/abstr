//
// Created by Janusz Grzesik on 01.12.2016.
//
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    vector<int> tab;
    int x;
    do {
        cout << "Podaj element tablicy: ";
        cin >> x;
        tab.push_back(x);
    } while (x != 0);


    priority_queue<int> pq(tab.begin(), tab.end());

    while (!pq.empty()) {
        cout << pq.top() <<endl;
        pq.pop();
    }

    return 0;
}
