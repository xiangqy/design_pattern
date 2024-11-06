#ifndef PHONE_H_
#define PHONE_H_
class Phone {
public:
    Phone() = default;
    virtual ~Phone() = default;
    virtual void Call() = 0;
    virtual void SendMessage() = 0;
};

class XiaoMi : public Phone {
public:
    XiaoMi() = default;
    ~XiaoMi() = default;

    virtual void Call() override;
    virtual void SendMessage() override;
};

class HuaWei : public Phone {
public:
    HuaWei() = default;
    ~HuaWei() = default;

    virtual void Call() override;
    virtual void SendMessage() override;
};

#endif