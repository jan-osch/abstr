//
// Created by Janusz Grzesik on 01.12.2016.
//
#include <iostream>
#include <vector>
#include <set>

using namespace std;


set<int> loadSet() {
    set<int> result;
    int x;

    while (true) {
        cout << "Podaj element tablicy: ";
        cin >> x;
        if (x == 0) break;
        result.insert(x);
    }

    return result;
}

template<class T>
void printSetWithTitle(string title, set<T> s) {
    cout << title << " : ";
    for (auto element : s) {
        cout << element << " ";
    }
    cout << endl;
}


int main() {
//    set<int> first = loadSet();
//    set<int> second = loadSet();
//
    set<int> first = {1, 2, 3, 4};
    set<int> second = {3, 3, 3, 4, 5};


    set<int> intersection;
    set<int> sum(second);

    for (auto element : first) {
        if (second.count(element) != 0) {
            intersection.insert(element);
        }

        sum.insert(element);
    }

    printSetWithTitle("Intersection", intersection);
    printSetWithTitle("Sum", sum);

    return 0;
}
