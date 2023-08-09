#ifndef COMPOUND_INTEREST_CALCULATOR_HPP
#define COMPOUND_INTEREST_CALCULATOR_HPP

#include "InterestCalculator.hpp"
#include <cmath>

class CompoundInterestCalculator : public InterestCalculator<CompoundInterestCalculator> {
public:
    double calculate(double principal, double rate, double time);
};

#endif // COMPOUND_INTEREST_CALCULATOR_HPP
