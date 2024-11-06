#include "derived_singleton.h"
#include <iostream>

DerivedSingleton::DerivedSingleton() {
    init();
}

DerivedSingleton::~DerivedSingleton() {
    uninit();
}

std::string DerivedSingleton::GetNumber() const {
    return number_;
}

void DerivedSingleton::init() {
    number_ = "Init complete.";
}

void DerivedSingleton::uninit() {
    std::cout << "uninit" << std::endl;
    number_.clear();
}