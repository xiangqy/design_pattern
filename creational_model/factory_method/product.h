#ifndef PRODUCT_H_
#define PRODUCT_H_
class Product {
public:
    virtual void Show() = 0;
};

class TV : public Product {
public:
    TV() = default;
    ~TV() = default;

    virtual void Show() override;
};

class Phone : public Product {
public:
    Phone() = default;
    ~Phone() = default;

    virtual void Show() override;
};
#endif