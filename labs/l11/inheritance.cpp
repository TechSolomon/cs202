// inheritance.cpp
// Solomon Himelbloom
// 23 March 2021
// Construction/destruction order of base/derived classes example for CS 202.

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::fstream;
using std::ifstream;
using std::map;
using std::ofstream;
using std::reverse;
using std::sort;
using std::string;
using std::vector;
using std::unique_ptr;
using std::shared_ptr;
using std::make_unique;
using std::make_shared;
using std::move;
using std::runtime_error;

class Base {
private:
    string _name;
public:
    Base() {
        cout << ">> Calling Base constructor with name of " << _name << "." << endl;
    }

    Base(const string &name) : _name(name) {
        cout << ">> Calling Base default constructor with name of " << _name << "." << endl;
    }

    ~Base() {
        cout << ">> Calling Base destructor with name of " << _name << "." << endl;
    }

    string getName() const {
        return _name;
    }

    void setName(const string &newName) {
        _name = newName;
    }

    void nametag() {
        cout << "I have a nametag given from the Base class." << endl;
    }
};

class Derived : public Base {
private:
    int _age;
public:
    Derived() {
        cout << ">> Calling Derived constructor with age of " << _age << "." << endl;
    }

    using Base::Base;

    Derived(int age) : Base("Solomon"),_age(age) {
        cout << ">> Calling Derived default constructor with age of " << _age << "." << endl;
    }

    ~Derived() {
        cout << ">> Calling Derived destructor with age of " << _age << "." << endl;
    }

    int getAge() const {
        return _age;
    }

    void setAge(int newAge) {
        _age = newAge;
    }

    void nametag() {
        cout << "Given Derived age from Base class." << endl;
    }
};

int main() {
    {Base b("Solomon");
    cout << "Name: ";
    cout << b.getName() << endl;

    b.setName("Anonymous");
    cout << "Name: ";
    cout << b.getName() << endl;

    b.nametag();}

    {Derived anotherName("John Doe");
    anotherName.setAge(100);}

    {Derived d(19);
    d.setAge(21);
    
    cout << "Age: ";
    d.setAge(35);
    cout << d.getAge() << endl;
    
    d.nametag();}
    
    return 0;
}
