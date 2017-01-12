//
// Created by Janusz Grzesik on 01.12.2016.
//
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

template<class T>
class CustomComparator {
public:
    bool operator()(T first, T second) {
        return second < first;
    }
};

int main() {
    vector<int> tab;
    int x;
    while (true) {
        cout << "Podaj element tablicy: ";
        cin >> x;
        if (x == 0) break;
        tab.push_back(x);
    }


    priority_queue<int, std::vector<int>, CustomComparator<int>> pq(tab.begin(), tab.end());

    while (!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}
