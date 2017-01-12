//
// Created by Janusz Grzesik on 08.12.2016.
//

#include <iostream>
#include <vector>

using namespace std;

template<class T>
class Matrix {
    size_t sizeX;
    size_t sizeY;
    vector<vector<T>> elements;

public:
    Matrix(size_t x, size_t y = 1)
            : sizeX(x), sizeY(y) {
        elements = vector<vector<T>>(y, vector<T>(x));
    }

    Matrix(vector<vector<T>> ele)
            : elements(ele) {
        sizeX = ele.getSize
    };

    void toString() {

        for (auto vec : elements) {
            for (auto elem :vec) {
                cout << " " << elem;
            }
            cout << endl;
        }
    }

    T getElement(size_t y, size_t x) {
        return elements[y][x];
    }

    size_t getSizeX() {
        return sizeX;
    }

    size_t getSizeY() {
        return sizeY;
    }

    Matrix<T> operator+(Matrix<T> &other)const {
        vector<vector<T>> newElements(elements);

        cout << "jazda" << endl;
        for (size_t i = 0; i < sizeY; i++) {
            for (size_t j = 0; j < sizeX; j++) {
                cout << i << j << endl;
                newElements[i][j] += other.getElement(i, j);
            }
        }

        return Matrix<T>(newElements);
    }

    Matrix<T> operator*(Matrix<T> &other) const {
        /**
         * Initialize empty vectors
         */
        vector<vector<T>> newElements(sizeY, vector<T>(other.getSizeX()));

        for (size_t i = 0; i < sizeY; i++) {
            for (size_t j = 0; j < other.getSizeX(); j++) {
                for (size_t z = 0; z < sizeX; z++) {
                    newElements[i][j] += elements[i][z] * other.getElement(z, j);
//                    newElements[i][j] = 1;
                }
            }
        }

        return Matrix<T>(newElements);
    }

};

int main() {
    Matrix<int> first({{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}});

    Matrix<int> second({{1, 0, 1},
                        {1, 0, 1},
                        {1, 0, 1}});

    Matrix<int> third = first + second;

    third.toString();


//    Matrix<int> mulOne({
//                               {1,  0, 2},
//                               {-1, 3, 1}
//                       });
//
//    Matrix<int> mulTwo({
//                               {3, 1},
//                               {2, 1},
//                               {1, 0}
//                       });
//
//    Matrix<int> mulRes = mulOne * mulTwo;
//
//    mulRes.toString();

    return 0;
}