#ifndef INTEREST_CALCULATOR_HPP
#define INTEREST_CALCULATOR_HPP

template <typename Derived>
class InterestCalculator {
public:
    double calculateInterest(double principal, double rate, double time);
};

#include "../include/InterestCalculator.tpp"

#endif // INTEREST_CALCULATOR_HPP


