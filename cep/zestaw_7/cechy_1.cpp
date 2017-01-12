//
// Created by Janusz Grzesik on 05.01.2017.
//

#include <iostream>
#include <vector>

using namespace std;

template<typename T>
struct Traits;

template<>
struct Traits<char> {
    typedef int sumType;
    typedef float meanType;
    static constexpr int neutral = 0;
    typedef int neutralType;
};

template<>
struct Traits<int> {
    typedef long int sumType;
    typedef double meanType;
    static constexpr double neutral = 0.0f;
    typedef double neutralType;
};

template<typename T>
typename Traits<T>::sumType sum(const vector<T> &v) {
    typename Traits<T>::neutralType partial = Traits<T>::neutral;

    for (auto element: v) {
        partial += (typename Traits<T>::sumType) element;
    }

    return partial;
}

template<typename T>
typename Traits<T>::meanType mean(const vector<T> &v) {
    typename Traits<T>::meanType partial = Traits<T>::neutral;

    for (auto element: v) {
        partial += (typename Traits<T>::meanType) element;
    }

    return partial / v.size();
}


int main() {

    vector<int> v = {1, 2, 3, 4};
    vector<char> c = {8, -2, 3, 4};

    cout << sum(v) << endl;
    cout << sum(c) << endl;

    cout << mean(v) << endl;
    cout << mean(c) << endl;

    return 0;
}