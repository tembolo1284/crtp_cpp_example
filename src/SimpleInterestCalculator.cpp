#include "../include/SimpleInterestCalculator.hpp"

double SimpleInterestCalculator::calculate(double principal, double rate, double time) {
    return principal * rate * time / 100;
}
