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

    int getAge() const {
        return age;
    }


    void setAge(int _age) {
        age = _age;
    }

    /**
     * Konstruktor z listą inicjacyjną
     * @param _name
     * @param _age
     * @return
     */
    Animal(string _name, int _age) : name(_name), age(_age) {};

    /**
     * Konstruktor kopiujący
     * @param obj
     * @return
     */
    Animal(const Animal &obj) {
        age = obj.getAge();
        name = obj.name;
    }

    Animal() {}
};


class Cat : public Animal, public ISpeakable {
private:
    string color;
public:
    string speak() {
        return "Meow meow";
    }
};


class Dog : public Animal, public ISpeakable {
public:
    string speak() {
        return "bark bark";
    }
};


class Fish : public Animal {
};


int main() {
    Dog *dog = new Dog;
    dog->setAge(1);
    dog->name = "Reksio";
    cout << dog->speak() << endl;

    Cat *cat = new Cat;
    cat->setAge(8);
    cat->name = "Behemot";
    cout << cat->speak() << "\n";


    Fish *fish = new Fish;
    fish->name = "Nemo";

    cout << fish->name << "\n";

    return 0;
}