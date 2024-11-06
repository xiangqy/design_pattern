#ifndef CITATION_H_
#define CITATION_H_
#include "base_info.h"
#include "certificate.h"

class Citation : public Certificate
{
public:
    explicit Citation(BaseInfo* base_info);
    ~Citation();

    virtual void Display() override;
    virtual void SetAwardsInfo(std::string data_info, std::string class_info) override;
    virtual void SetPrizeWinerInfo(std::string college, std::string name, std::string sex) override;
    virtual Certificate* Clone() override;

private:
    BaseInfo* base_info_{ nullptr };
};
#endif