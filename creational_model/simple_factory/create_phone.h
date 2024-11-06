#ifndef CREATE_PHONE_H_
#define CREATE_PHONE_H_
#include "phone.h"

enum class PhoneBrand {
    kXiaoMi = 1,
    KHuaWei
};

class CreatePhone {
public:
    CreatePhone() = default;
    ~CreatePhone() = default;

    Phone* CreatePhoneInstance(PhoneBrand phone_brand);
};
#endif
