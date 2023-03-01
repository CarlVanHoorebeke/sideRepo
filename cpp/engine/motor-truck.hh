#pragma once

#include <iostream>

#include "vehicle.hh"

class MotorTruck : public Vehicule
{
public:
    int nb_tires;

    MotorTruck(const std::string &model, int fuel, size_t nb_tires);
    void change_tires() const override;
};