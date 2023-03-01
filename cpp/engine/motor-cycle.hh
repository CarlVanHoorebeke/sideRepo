#pragma once

#include "vehicle.hh"

class MotorCycle : public Vehicule
{
public:
    MotorCycle(const std::string &model);
    void change_tires() const override;
};