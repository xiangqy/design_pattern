#include "abstract_factory.h"
#include <iostream>

int main(int argc, char** argv) {
    auto* hw = new Hw();
    auto* xm = new Xm();

    auto* hw_phone = hw->FactoryPhone();
    auto* hw_tv = hw->FactoryTv();

    auto* xm_phone = xm->FactoryPhone();
    auto* xm_tv = xm->FactoryTv();

    std::string hw_phone_str = hw_phone->CreatePhone();
    std::string hw_tv_str = hw_tv->CreateTv();
    std::string xm_phone_str = xm_phone->CreatePhone();
    std::string xm_tv_str = xm_tv->CreateTv();

    std::cout << hw_phone_str << std::endl;
    std::cout << hw_tv_str << std::endl;
    std::cout << xm_phone_str << std::endl;
    std::cout << xm_tv_str << std::endl;

    delete hw_phone;
    delete hw_tv;
    delete xm_phone;
    delete xm_tv;
    delete hw;
    delete xm;

    return 0;
}