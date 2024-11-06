#ifndef ABSTRACT_FACTORY_H_
#define ABSTRACT_FACTORY_H_
#include "Tv.h"
#include "phone.h"

class AbstractFactory {
public:
    AbstractFactory() = default;
    virtual ~AbstractFactory() = default;
    virtual Tv* FactoryTv() = 0;
    virtual Phone* FactoryPhone() = 0;
};

class Hw :public AbstractFactory {
public:
    Hw() = default;
    ~Hw() = default;

    virtual Tv* FactoryTv() override;
    virtual Phone* FactoryPhone() override;
};

class Xm :public AbstractFactory {
public:
    Xm() = default;
    ~Xm() = default;

    virtual Tv* FactoryTv() override;
    virtual Phone* FactoryPhone() override;
};

#endif