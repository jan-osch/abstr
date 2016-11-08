//
// Created by Janusz Grzesik on 03.11.2016.
//

#include <iostream>

using namespace std;

template<class type>
type getMax(type a, type b) {
    return a > b ? a : b;
}

int main() {
    cout << getMax(1, 12) << "\n";
    cout << getMax(0.1, 0.12) << "\n";
    cout << getMax(0.1212312L, 0.123123123L) << "\n";
    cout << getMax<double>(8.0f, 7.0) << "\n";

    return 0;
}