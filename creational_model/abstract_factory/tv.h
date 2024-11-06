#ifndef TV_H_
#define TV_H_
#include <string>

class Tv {
public:
    virtual std::string CreateTv() = 0;
};

class HwTv : public Tv {
public:
    HwTv() = default;
    ~HwTv() = default;

    virtual std::string CreateTv() override;
};

class XmTv : public Tv {
public:
    XmTv() = default;
    ~XmTv() = default;

    virtual std::string CreateTv() override;
};
#endif