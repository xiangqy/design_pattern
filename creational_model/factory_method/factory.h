#ifndef FACTORY_H_
#define FACTORY_H_
#include "product.h"

class Factory {
public:
    virtual Product* CreateProduct() = 0;
};

class FactoryTV : public Factory {
public:
    FactoryTV() = default;
    ~FactoryTV() = default;
    virtual Product* CreateProduct() override;
};

class FactoryPhone : public Factory {
public:
    FactoryPhone() = default;
    ~FactoryPhone() = default;
    virtual Product* CreateProduct() override;
};
#endif