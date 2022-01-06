#ifndef CAR_HPP_INCLUDED
#define CAR_HPP_INCLUDED

#include <ostream>

class Car {
 public:
        static const size_t CAPACITY = 4;
        Car(const Car& other) = delete;
        Car& operator=(const Car& other) = delete;
        ~Car() = default;
        Car();
        size_t getUsage();
        bool isEmpty();
        bool isFull();
        void addPackage();
        void removePackage();

        friend std::ostream& operator<<(std::ostream& os, const Car& c);
 private:
        bool bins_[CAPACITY];
        size_t binsInUse_;
};

std::ostream& operator<<(std::ostream& os, const Car& c);

#endif
