#include <iostream>

using namespace std;

template<typename T>
class Array {
public:
    Array() {
        cout << "Szablonowa " << endl;
    }

    class Iterator {
    };
};

template<>
class Array<double> {
public:
    Array() {
        cout << "Double" << endl;
    }

    const static int Iterator = 6;
};

template<typename T>
void iterate(Array<T> &a) {
    typename Array<T>::Iterator it;
}


int main() {


    Array<int> a;
    Array<double> b;

    iterate(a);
    iterate(b);
    return 0;
}