#include "engine.hh"

#include <iostream>

Engine::Engine(int fuel)
    : fuel_(fuel)
    {}

bool Engine::start(){
    if (fuel_ > 0){
        fuel_--;
        std::cout << "Engine starts with "<< fuel_ <<" units of fuel\n";
        return true;
    }
    fuel_--;
    return false;
}
void Engine::use(int consumed){
    if (consumed > fuel_){
        std::cout << "Engine uses " << fuel_ <<" fuel units\n" ;
        fuel_ = 0;
    }
    else{
        std::cout << "Engine uses " << consumed <<" fuel units\n" ;
        fuel_ -= consumed;
    }

}

void Engine::stop(){
    std::cout << "Stop Engine\n";
}

void Engine::fill(int fuel){
    fuel_ += fuel;
    std::cout << "Engine now has " << fuel_ << " fuel units\n";
}