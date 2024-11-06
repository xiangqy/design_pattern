#ifndef BASE_INFO_H_
#define BASE_INFO_H_
#include <string>

class BaseInfo {

public:
    BaseInfo() = default;
    ~BaseInfo() = default;

    void SetAwards(std::string awards) {
        awards_ = std::move(awards);
    }

    void SetAwardsClass(std::string awards_class) {
        awards_class_ = std::move(awards_class);
    }

    std::string GetAwards()const {
        return awards_;
    }

    std::string GetAwardsClass()const {
        return awards_class_;
    }

    BaseInfo* Clone() {
        BaseInfo* base_info = new BaseInfo;
        *base_info = *this;
        return base_info;
    }

private:
    std::string awards_;
    std::string awards_class_;
};

#endif