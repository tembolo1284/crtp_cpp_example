#include "../include/SimpleInterestCalculator.hpp"
#include "../include/CompoundInterestCalculator.hpp"
#include <iostream>

int main() {
    SimpleInterestCalculator simple;
    CompoundInterestCalculator compound;

    double principal = 1000.0;
    double rate = 5.0;
    double time = 2.0;

    std::cout << "Simple Interest: " << simple.calculateInterest(principal, rate, time) << '\n';
    std::cout << "Compound Interest: " << compound.calculateInterest(principal, rate, time) << '\n';

    return 0;
}