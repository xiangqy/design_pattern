#include "factory.h"

Product* FactoryTV::CreateProduct(){
    return new TV;
}

Product* FactoryPhone::CreateProduct(){
    return new Phone;
}
