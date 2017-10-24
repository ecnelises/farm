#ifndef SINGLETON_H
#define SINGLETON_H

template<typename T>
class Singleton {
public:
    static Singleton& instance()
    {
        static Singleton inst;
        return inst;
    }
protected:
    Singleton() = default;
    virtual ~Singleton() = default;
    Singleton(Singleton&&) = delete;
    Singleton& operator = (Singleton&&) = delete;
    Singleton(const Singleton&) = delete;
    Singleton& operator = (const Singleton&) = delete;
};

#endif
