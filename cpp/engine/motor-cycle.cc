#include "motor-cycle.hh"

#include <iostream>
#include <sys/types.h>

#include "vehicle.hh"

MotorCycle::MotorCycle(const std::string &model)
    : Vehicule(model, 20)
{}

void MotorCycle::change_tires() const
{
    std::cout << "Changing front and back wheels of the " << model_ << "\n";
}
