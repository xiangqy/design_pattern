#ifndef PHONE_H_
#define PHONE_H_
#include <string>

class Phone {
public:
    virtual std::string CreatePhone() = 0;
};

class HwPhone : public Phone {
public:
    HwPhone() = default;
    ~HwPhone() = default;

    virtual std::string CreatePhone() override;
};

class XmPhone : public Phone {
public:
    XmPhone() = default;
    ~XmPhone() = default;

    virtual std::string CreatePhone() override;
};
#endif