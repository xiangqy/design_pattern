#include "create_phone.h"

Phone* CreatePhone::CreatePhoneInstance(PhoneBrand phone_brand) {
    Phone* instance = nullptr;
    switch (phone_brand) {
    case PhoneBrand::kXiaoMi:
        instance = new XiaoMi;
        break;
    case PhoneBrand::KHuaWei:
        instance = new HuaWei;
    default:
        break;
    }
    return instance;
}