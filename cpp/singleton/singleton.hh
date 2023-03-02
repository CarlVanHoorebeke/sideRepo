#pragma once

#include <iostream>

template<typename T>
class Singleton {
public:
    static T* instance() {
        static T instance;
        return &instance;
    }

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

protected:
    Singleton() = default;
    ~Singleton() = default;
};

class Logger : public Singleton<Logger> {
public:

    void open_log_file(const std::string& file);
    void write_to_log_file();
    void close_log_file();


private:
    friend class Singleton<Logger>;
    Logger() = default;
    ~Logger() = default;

};
