/**
 * @file calculator.cpp
 * @brief A small calculator used to try out Doxygen comments.
 * @author Umed harwani
 * @version 1.0
 */

#include <iostream>

/**
 * @brief Adds two integers.
 * @param a First number.
 * @param b Second number.
 * @return The sum of a and b.
 */
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Subtracts b from a.
 * @param a First number.
 * @param b Number to subtract.
 * @return The difference a - b.
 */
int subtract(int a, int b) {
    return a - b;
}

/**
 * @brief Divides a by b.
 * @param a Numerator.
 * @param b Denominator, must not be zero.
 * @return The result of a / b.
 * @note The caller must check that b is not zero.
 * @see add
 */
double divide(double a, double b) {
    return a / b;
}

/**
 * @class Counter
 * @brief Keeps a running count.
 */
class Counter {
public:
    /** @brief Increases the count by one. */
    void increment() { ++count_; }

    /**
     * @brief Returns the current count.
     * @return The number of times increment() was called.
     */
    int value() const { return count_; }

private:
    int count_ = 0; ///< Current count.
};

/**
 * @brief Entry point.
 * @return 0 on success.
 */
int main() {
    std::cout << "10 + 5 = " << add(10, 5) << '\n';
    std::cout << "10 - 5 = " << subtract(10, 5) << '\n';
    std::cout << "10 / 4 = " << divide(10, 4) << '\n';

    Counter c;
    c.increment();
    std::cout << "Count: " << c.value() << '\n';
    return 0;
}
