// wrapper.hpp
// Solomon Himelbloom
// 6 April 2021
// Class templates (header file) example for CS 202.

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::move;
using std::string;
using std::ostream;
using std::reverse;

#ifndef L15_WRAPPER_HPP
#define L15_WRAPPER_HPP

template <typename ObjectType>
class Wrapper {
public:
    explicit Wrapper(ObjectType type);
    ObjectType getWrapper() const;
    void setWrapper(ObjectType example);
private:
    ObjectType _type;
};

template<typename ObjectType>
Wrapper<ObjectType>::Wrapper(ObjectType type) :_type(type) {};

template <typename ObjectType>
ObjectType Wrapper<ObjectType>::getWrapper() const {
    return _type;
};

template <typename ObjectType>
void Wrapper<ObjectType>::setWrapper(ObjectType example) {
    _type = example;
}

template <typename ObjectType>
ostream & operator<<(ostream &os, const Wrapper<ObjectType> &t) {
    return os << t.getWrapper();
}

#endif //L15_WRAPPER_HPP
