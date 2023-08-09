template <typename Derived>
double InterestCalculator<Derived>::calculateInterest(double principal, double rate, double time) {
    return static_cast<Derived*>(this)->calculate(principal, rate, time);
}
