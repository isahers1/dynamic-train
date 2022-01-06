#include <iostream>
#include <ostream>
#include "car.hpp"


/**
 * \brief Default constructor for Car object
 * \param void
 * \returns void
 **/
Car::Car() :
bins_{0},
binsInUse_{0}
{
}

/**
 * \brief Check if a car object is empty
 * \param Car object
 * \returns Boolean value of car empty or not
 **/
bool Car::isEmpty() {
    if (binsInUse_ == 0) {
        return true;
    } else {
        return false;
    }
}

/**
 * \brief Check if a car object is full
 * \param Car object
 * \returns Boolean value of car full or not
 **/
bool Car::isFull() {
    if (binsInUse_ == CAPACITY) {
        return true;
    } else {
        return false;
    }
}

/**
 * \brief Check how many cars are used
 * \param Car object
 * \returns number of bins in use
 **/
size_t Car::getUsage() {
    return binsInUse_;
}

/**
 * \brief Adds a package to a non-full car
 * and update member variable binsInUse_ appropriately
 * \param Car object
 * \returns void
 **/
void Car::addPackage() {
    if (isFull() == false) {
        bins_[binsInUse_] = true;
        binsInUse_ += 1;
    }
}

/**
 * \brief Removes a package to a non-empty car
 * and update member variable binsInUse_ appropriately
 * \param Car object
 * \returns void
 **/
void Car::removePackage() {
    if (isEmpty() == false) {
        bins_[binsInUse_ - 1] = false;
        binsInUse_ -= 1;
    }
}

/**
 * \brief Print statement for Car object. Prints Cars as either
 * full or empty in ASCII characters to the terminal
 * \param Car object, reference to output stream, and reference to car object
 * \returns ostream string object
 **/
std::ostream& operator<<(std::ostream& os, const Car& c) {
    for (size_t i = 0; i < Car::CAPACITY; i++) {
        if (c.bins_[i] == false) {
            os << "[_]";
        } else {
            os << "[x]";
        }
    }

    os << "~";

    return os;
}

