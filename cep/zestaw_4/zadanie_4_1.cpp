#include <iostream>

using namespace std;

template<class T>
class Array {
    size_t size;
    T *array;

public:
    class iterator {
        Array* a;
        size_t ind;
    public:
        iterator() : a(nullptr), ind(0) {}

        iterator(Array* a, size_t ind) : a(a), ind(ind) {}

        bool operator!=(const iterator& other) {
            return ind != other.ind;
        }

        iterator& operator++() {
            ind++;
            return *this;
        }

        T& operator*() {
            return (*a)[ind];
        }
    };


    iterator begin() {
        return iterator(this, 0);
    }

    iterator end() {
        return iterator(this, size);
    }

    Array(size_t size = 10)
            : size(size), array(new T[size]) {}

    Array(const Array &other)
            : size(other.size), array(new T[size]) {

        for (size_t i = 0; i < size; ++i) {
            array[i] = other.array[i];
        }
    }

    Array &operator=(const Array &other) {
        if (this == &other) {
            return *this;
        }

        delete[] array;

        size = other.size;
        array = new T[size];

        for (size_t i = 0; i < size; ++i) {
            array[i] = other.array[i];
        }
        return *this;
    }

    T &operator[](size_t i) {
        if (i >= size) {
            cout << "Index out of bounds" << endl;
            // return first element.
            return array[0];
        }
        return array[i];
    }

    virtual ~Array() {
        delete[] array;
    }

    size_t getSize() const {
        return size;
    }
};

int main() {
    Array<int> a = Array<int>(5);
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    a[3] = 3;
    a[4] = 4;

    Array<int>::iterator it;
    for(it=a.begin(); it!=a.end(); ++it )  {
        cout<< *it <<'\n';
    }

    return 0;
}