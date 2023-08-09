#ifndef SIMPLE_INTEREST_CALCULATOR_HPP
#define SIMPLE_INTEREST_CALCULATOR_HPP

#include "InterestCalculator.hpp"

class SimpleInterestCalculator : public InterestCalculator<SimpleInterestCalculator> {
public:
    double calculate(double principal, double rate, double time);
};

#endif // SIMPLE_INTEREST_CALCULATOR_HPP
