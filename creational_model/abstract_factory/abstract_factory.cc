#include "abstract_factory.h"
#include "tv.h"
#include "phone.h"

Tv* Hw::FactoryTv()
{
    return new HwTv;
}

Phone* Hw::FactoryPhone()
{
    return new HwPhone;
}

Tv* Xm::FactoryTv()
{
    return new XmTv;
}

Phone* Xm::FactoryPhone()
{
    return new XmPhone;
}
