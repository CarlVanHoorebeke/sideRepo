#include "motor-cycle.hh"

#include <iostream>
#include <sys/types.h>

MotorCycle::MotorCycle(const std::string &model)
    : Vehicle(model, 20)
{}

void MotorCycle::change_tires() const
{
    std::cout << "Changing front and back wheels of the " << model_ << "\n";
}
