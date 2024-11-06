#include "create_phone.h"

int main(int argc, char** argv) {
    auto* phone_factory = new CreatePhone;
    if (phone_factory == nullptr)
        return -1;

    Phone* xiaomi_phone = phone_factory->CreatePhoneInstance(PhoneBrand::kXiaoMi);
    xiaomi_phone->Call();
    xiaomi_phone->SendMessage();

    Phone* huawei_phone = phone_factory->CreatePhoneInstance(PhoneBrand::KHuaWei);
    huawei_phone->Call();
    huawei_phone->SendMessage();

    delete xiaomi_phone;
    delete huawei_phone;
    delete phone_factory;
    return 0;
}