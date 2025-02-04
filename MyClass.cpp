#include "MyClass.h"

/**
 * @brief Default constructor for MyClass.
 * 
 * Initializes the counter to 0.
 */
MyClass::MyClass() : counter(0) {}

/**
 * @brief Sets the value of the internal counter.
 * 
 * @param value The value to set for the counter.
 */
void MyClass::setCounter(int value) {
    counter = value;
}

/**
 * @brief Gets the value of the internal counter.
 * 
 * @return The current value of the counter.
 */
int MyClass::getCounter() const {
    return counter;
}
