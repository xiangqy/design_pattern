#ifndef DERIVED_SINGLETON_H_
#define DERIVED_SINGLETON_H_
#include "singleton.hpp"
#include <string>

class DerivedSingleton : public Singleton<DerivedSingleton>
{
    friend class Singleton<DerivedSingleton>;
public:
    DerivedSingleton(const DerivedSingleton&) = delete;
    DerivedSingleton& operator=(const DerivedSingleton&) = delete;

    std::string GetNumber()const;
private:
    DerivedSingleton();
    ~DerivedSingleton();
    void init();
    void uninit();

    std::string number_;
};

#endif