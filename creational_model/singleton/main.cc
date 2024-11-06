#include "derived_singleton.h"
#include <iostream>

int main(int argc, char** agrv) {
    std::cout << DerivedSingleton::GetInstance().GetNumber() << std::endl;
    return 0;
}