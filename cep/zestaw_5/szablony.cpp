#include <iostream>

using namespace std;


template<typename T>
void funkcjaA(T t){
    cout << "Funkcja Szablonowa "  << t <<endl;
}

template<> // w ten sposób możemy zdefiniować zachowanie funkcjiA dla double
void funkcjaA(double d){
    cout << "Funkcja dla double "  << d <<endl;
}


template <typename T>
void czyJestCalkowita(T t){
    cout << "niew wiem"<<endl;
}

template <>
void czyJestCalkowita(int t){
    cout << "tak"<<endl;
}



int main(){
    funkcjaA(1);

    funkcjaA("Pikaczu");

    funkcjaA(5.0);

    funkcjaA<double>(6.0); // to się wywoła jako szablonowa

    czyJestCalkowita(5.0);
    czyJestCalkowita(1);

    return 0;
}