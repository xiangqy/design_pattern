#ifndef CERTIFICATE_H_
#define CERTIFICATE_H_
#include <string>

class Certificate
{
public:
    Certificate() = default;
    virtual ~Certificate() = default;

    virtual void Display() = 0;
    virtual void SetAwardsInfo(std::string data_info, std::string class_info) = 0;
    virtual void SetPrizeWinerInfo(std::string college, std::string name, std::string sex) = 0;
    virtual Certificate* Clone() = 0;

protected:
    std::string name_;
    std::string sex_;
    std::string college_;
};
#endif