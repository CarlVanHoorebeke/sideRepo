#include "vehicle.hh"

Vehicule::Vehicule(const std::string &model, int fuel)
    : model_(model)
    , engine_(fuel)
{}

bool Vehicule::start()
{
    return engine_.start();
}

void Vehicule::stop()
{
    engine_.stop();
}

void Vehicule::cruise(int fuel)
{
    engine_.use(fuel);
}

void Vehicule::fill(int fuel)
{
    engine_.fill(fuel);
}
