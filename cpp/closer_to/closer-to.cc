#include "closer-to.hh"

#include <algorithm>
#include <iostream>
#include <vector>

CloserTo::CloserTo(int i)
    : i_(i)
{}

bool CloserTo::operator()(const int& a, const int& b) const
{
    int a_ = i_ >= a ? i_ - a : a - i_;
    int b_ = i_ >= b ? i_ - b : b - i_;
    if (a_ == b_)
        return a <= b ? true : false;
    if (a_ < b_)
        return true;
    return false;
}