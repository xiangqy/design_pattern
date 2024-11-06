#include "citation.h"
#include <iostream>

Citation::Citation(BaseInfo* base_info) {
    base_info_ = base_info->Clone();
}

Citation::~Citation() {
    if (base_info_) {
        delete base_info_;
        base_info_ = nullptr;
    }
}

void Citation::Display() {
    std::cout << name_ << " " << sex_ << " " << college_ << std::endl;
    std::cout << base_info_->GetAwards() << " " << base_info_->GetAwardsClass() << std::endl;
}

void Citation::SetAwardsInfo(std::string data_info, std::string class_info) {
    if (!base_info_)
        return;
    base_info_->SetAwards(std::move(data_info));
    base_info_->SetAwardsClass(std::move(class_info));
}

void Citation::SetPrizeWinerInfo(std::string college, std::string name, std::string sex) {
    college_ = college;
    name_ = name;
    sex_ = sex;
}

Certificate* Citation::Clone() {
    if (!base_info_)
        return nullptr;
    Citation* instance = new Citation(base_info_);
    instance->college_ = college_;
    instance->sex_ = sex_;
    instance->name_ = name_;
    return instance;
}
