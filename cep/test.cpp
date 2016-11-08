//
// Created by Janusz Grzesik on 03.11.2016.
//
#include <iostream>

using namespace std;

class ISpeakable {
public:
    virtual string speak() = 0;
};

class Animal {
private:
    int age;
public:

    string name;
    int getAge() const{
        return age;
    }


    void setAge(int _age) {
        age = _age;
    }

    Animal(string _name): name(_name) {}

    Animal(const Animal& obj) :age(obj.getAge()), name(obj.name) {}
    virtual ~Animal()= 0;
};


class Cat : public Animal, public ISpeakable {
public:
    string speak() {
        return "Meow meow";
    }
};

class Dog : public Animal, public ISpeakable {
public:
    Dog(const Animal& obj): Animal(obj){}
    string speak() {
        return "bark bark";
    }
};

class Fish : public Animal {
public:
};


int main() {
    Dog *dog = new Dog("Reksio");
    cout << dog->speak() << "\n";

    Cat *cat = new Cat("Mruczek");
    cout << cat->speak() << "\n";

    Fish *fish = new Fish("Nemo");

    cout << fish->name<< "\n";

    return 0;
}