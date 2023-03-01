#pragma once

class Engine
{
public:
    Engine(int fuel);
    bool start();
    void use(int consumed);
    void stop();
    void fill(int fuel);

protected:
    int fuel_;
};