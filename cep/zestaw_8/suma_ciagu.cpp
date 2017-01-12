//
// Created by Janusz Grzesik on 12.01.2017.
//


#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

template<typename T>
struct Traits {
    typedef T sumType;

    static const T min;
    static const T max;
    static const T neutral;

    static const bool isSpecialised = false;
    static const bool isArithmetic = false;
    static const bool isGeometric = false;
    static const bool isOther = false;
};

template<>
struct Traits<int> {
    typedef long sumType;

    static const long min = -100;
    static const long max = 100;
    static const sumType neutral = 0;

    static const bool isSpecialised = true;
    static const bool isArithmetic = true;
    static const bool isGeometric = false;
    static const bool isOther = false;
};


template<typename T, class V = Traits<T> >
typename V::sumType sumVector(const vector<T> &v) {
    if (!(V::isSpecialised)) {
        throw "TypeTrait is missing for type ";
    }

    typename V::sumType sum = V::neutral;

    if (v.size() <= 1) {
        sum = v.front();
    } else if (V::isArithmetic) {
        sum = (v.front() + v.back()) * v.size() / 2;
    } else if (V::isGeometric) {
        T q = v.at(1) / v.front();
        sum = v.front() * (1 - pow(q, v.size())) / (1 - q);
    } else if (V::isOther) {
        for (auto element: v) {
            sum += (typename V::sumType) element;
        }
    } else {
        throw "TypeTrait invalid";
    }


    if (sum > V::max) {
        return V::max;
    }
    if (sum < V::min) {
        return V::min;
    }

    return sum;
}

int main() {

    vector<int> v = {1, 2, 3, 4};
    vector<int> v1 = {30, 40, 21, 55, 12};

    cout << sumVector(v) << endl;
    cout << sumVector(v1) << endl;


    return 0;
}