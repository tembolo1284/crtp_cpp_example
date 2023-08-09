#include "../include/CompoundInterestCalculator.hpp"

double CompoundInterestCalculator::calculate(double principal, double rate, double time) {
    return principal * std::pow(1 + rate / 100, time) - principal;
}