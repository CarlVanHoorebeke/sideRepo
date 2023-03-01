#include "motor-truck.hh"

#include <iostream>

#include "vehicle.hh"

MotorTruck::MotorTruck(const std::string &model, int fuel, size_t nb_tires)
    : Vehicule(model, fuel)
    , nb_tires(nb_tires)
{}

void MotorTruck::change_tires() const
{
    std::cout << "Changing all " << nb_tires << " tires of the " << model_
              << "\n";
}