#ifndef TRAIN_HPP_INCLUDED
#define TRAIN_HPP_INCLUDED

#include <ostream>
#include "car.hpp"

enum traintype { BASIC, SMART };


class Train {
 public:
    Train(traintype type);
    ~Train();
    Train(const Train& other) = delete;
    Train& operator=(const Train& other) = delete;
    void addPackage();
    void removePackage();

    friend std::ostream& operator<<(std::ostream& os, const Train& c);

 private:
       Car *cars_;
       size_t numCars_;
       size_t usage_;
       size_t revenue_;
       size_t operatingCost_;
       static const size_t HANDLING_COST = 1;
       static const size_t SHIPPING_COST = 4;
       static const size_t BASIC_SIZE_CHANGE = 1;
       static const size_t SMART_SIZE_CHANGE = 2;
       static const size_t SMART_DOWNSIZE_THRESHOLD = 4;
       traintype type_;

       void changeSize(size_t size);
       void upsizeIfNeeded();
       void downsizeIfNeeded();
       void loadPackage();
};

std::ostream& operator<<(std::ostream& os, const Train& c);

#endif
