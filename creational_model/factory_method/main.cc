#include "factory.h"

int main(int argc, char** argv) {
    auto* factory_tv = new FactoryTV;
    auto* factory_phone = new FactoryPhone;

    auto* product_tv = factory_tv->CreateProduct();
    auto* product_phone = factory_phone->CreateProduct();

    product_tv->Show();
    product_phone->Show();

    delete product_tv;
    delete product_phone;
    delete factory_tv;
    delete factory_phone;
    return 0;
}