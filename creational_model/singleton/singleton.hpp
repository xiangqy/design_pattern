#ifndef SINGLETON_H_
#define SINGLETON_H_

template<typename T>

class Singleton {
public:
    static T& GetInstance()noexcept {
        static T instance;
        return instance;
    }

protected:
    virtual ~Singleton() noexcept = default;
    Singleton() = default;
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};
#endif