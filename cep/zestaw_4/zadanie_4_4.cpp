#include <iostream>

using namespace std;

template<class T>
class Array {
    size_t size;
    T *array;

public:
    class iterator {
        Array *a;
        size_t ind;
    public:
        iterator() : a(nullptr), ind(0) {}

        iterator(Array *a, size_t ind) : a(a), ind(ind) {}

        bool operator!=(const iterator &other) {
            return ind != other.ind;
        }

        bool operator==(const iterator &other) {
            return ind == other.ind;
        }

        void iteratorSwap(iterator &other) {
            T temp = (*a)[ind];
            (*a)[ind] = *other;
            other.set(temp);
        }

        iterator &operator++() {
            ind++;
            return *this;
        }

        iterator &operator+(const int i) {
            return iterator(a, this->ind + i);
        }

        void set(T newValue) {
            (*a)[ind] = newValue;
        }


        T &operator*() {
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

template<typename T>
class Comparer {
public:

    /**
     * Should return 1 if element first should be after second
     * Should return 0 if elements don't need to change order
     * Should return -1 if element first should be before second
     *
     * @param first
     * @param second
     * @return
     */
    virtual int compare(T first, T second) =0;
};

class NormalComparer : public Comparer<int> {
public:
    int compare(int first, int second) {
        return first - second;
    }
};

class FirstEvenComparer : public Comparer<int> {
public:
    int compare(int first, int second) {

        if (isEven(first) && !isEven(second)) {
            return -1;
        }

        if (!isEven(first) && isEven(second)) {
            return 1;
        }

        return 0;
    }

    bool isEven(int number) {
        return number % 2 == 0;
    }
};


template<class T>
void sort(Array<T> &a, Comparer<T> &comp) {
    if (a.getSize() < 1) {
        return ;
    }

    for (typename Array<T>::iterator it = ++a.begin(); it != a.end(); ++it) {
        for (typename Array<T>::iterator reference = a.begin(); reference != it; ++reference) {
            if (comp.compare(*reference, *it) > 0) {
                reference.iteratorSwap(it);
            }
        }
    }
}


int main() {
    Array<int> a = Array<int>(6);
    a[0] = 5;
    a[1] = 4;
    a[2] = 3;
    a[3] = 1;
    a[4] = 2;
    a[5] = 7;

    cout << "Orginalne:   ";
    for (Array<int>::iterator it = a.begin(); it != a.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;


//    NormalComparer comparer;
    FirstEvenComparer comparer;

    sort(a, comparer);

    cout << "Posortowane: ";
    for (Array<int>::iterator it = a.begin(); it != a.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}