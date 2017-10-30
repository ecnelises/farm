//
// Singleton.h
// 单例模版类，Singleton<T> 即可把类型 T 包装成单例
//
#ifndef SINGLETON_H
#define SINGLETON_H

template<typename T>
class Singleton {
public:
    // 第一次访问时初始化，且只初始化一次，线程安全
    static T& instance()
    {
        static T inst;
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
