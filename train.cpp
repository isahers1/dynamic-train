/*
   main.cpp

   Part of CS70 Homework 4. This file may NOT be
   shared with anyone other than the author(s) and
   the current semester's CS70 staff without
   explicit written permission from one of the
   CS70 instructors.
*/

#include <iostream>
#include "car.hpp"
#include "train.hpp"

////////////////////////////////////////////////////////
// Car Testing Functions
//

// expected output: no output, just don't cause memory errors
void testDeclareCar() {
    std::cout << "testDeclareCar()" << std::endl;
    Car c;  // constructor should be called here
}  // destructor should be called here

// expected output: [_][_][_][_]~
void testOutputEmptyCar() {
    std::cout << "testOutputEmptyCar()" << std::endl;
    Car c;
    std::cout << c << std::endl;
}

// expected output: no output, just don't cause memory errors
void testAddPackage_1() {
    std::cout << "testAddPackage_1()" << std::endl;
    Car c;
    c.addPackage();
}

// expected output: no output, just don't cause memory errors
void testAddPackage_2() {
    std::cout << "testAddPackage_2()" << std::endl;
    Car c;
    c.addPackage();
    c.addPackage();
}

// expected output: no output, just don't cause memory errors
void testAddPackage_3() {
    std::cout << "testAddPackage_3()" << std::endl;
    Car c;
    c.addPackage();
    c.addPackage();
    c.addPackage();
}

// expected output: no output, just don't cause memory errors
void testAddPackage_4() {
    std::cout << "testAddPackage_4()" << std::endl;
    Car c;
    c.addPackage();
    c.addPackage();
    c.addPackage();
    c.addPackage();
}

// expected output: no output, just don't cause memory errors
void testAddPackage_5() {
    std::cout << "testAddPackage_5()" << std::endl;
    Car c;
    c.addPackage();
    c.addPackage();
    c.addPackage();
    c.addPackage();
    c.addPackage();
}

// expected output:
void testAddPackageAndOutput_1() {
    std::cout << "testAddPackageAndOutput_1()" << std::endl;
    Car c;
    c.addPackage();
    std::cout << c << std::endl;
}

// expected output:
void testAddPackageAndOutput_2() {
    std::cout << "testAddPackageAndOutput_2()" << std::endl;
    Car c;
    c.addPackage();
    c.addPackage();
    std::cout << c << std::endl;
}

// expected output: no output, just don't cause memory errors
void testAddPackageAndOutput_4() {
    std::cout << "testAddPackageAndOutput_4()" << std::endl;
    Car c;
    c.addPackage();
    c.addPackage();
    c.addPackage();
    c.addPackage();
    std::cout << c << std::endl;
}

// expected output: no output, just don't cause memory errors
void testAddPackageAndOutput_5() {
    std::cout << "testAddPackageAndOutput_5()" << std::endl;
    Car c;
    c.addPackage();
    c.addPackage();
    c.addPackage();
    c.addPackage();
    c.addPackage();
    std::cout << c << std::endl;
}

// expected output: what do you think it should be? :)
void testAddRemovePackages_1() {
    std::cout << "testAddRemovePackages_1()" << std::endl;
    Car c;
    c.removePackage();
    std::cout << c << std::endl;
}

// expected output: what do you think it should be? :)
void testAddRemovePackages_2() {
    std::cout << "testAddRemovePackages_2()" << std::endl;
    Car c;
    c.addPackage();
    c.removePackage();
    std::cout << c << std::endl;
}

// expected output: what do you think it should be? :)
void testAddRemovePackages_3() {
    std::cout << "testAddRemovePackages_3()" << std::endl;
    Car c;
    c.addPackage();
    c.addPackage();
    c.removePackage();
    std::cout << c << std::endl;
}

// expected output: what do you think it should be? :)
void testAddRemovePackages_4() {
    std::cout << "testAddRemovePackages_4()" << std::endl;
    Car c;
    c.addPackage();
    c.addPackage();
    c.removePackage();
    c.removePackage();
    std::cout << c << std::endl;
}

// expected output: what do you think it should be? :)
void testAddRemovePackages_5() {
    std::cout << "testAddRemovePackages_5()" << std::endl;
    Car c;
    c.addPackage();
    c.removePackage();
    c.addPackage();
    c.addPackage();
    c.removePackage();
    c.addPackage();
    std::cout << c << std::endl;
}

// expected output: what do you think it should be? :)
void testAddRemovePackages_6() {
    std::cout << "testAddRemovePackages_6()" << std::endl;
    Car c;
    for (size_t i = 0; i < Car::CAPACITY; ++i) {
        std::cout << c << std::endl;
        c.addPackage();
    }

    std::cout << c << std::endl;

    for (size_t i = 0; i < Car::CAPACITY; ++i) {
        std::cout << c << std::endl;
        c.removePackage();
    }

    std::cout << c << std::endl;
}

////////////////////////////////////////////////////////
// Train Testing Functions
//

void testCreateTrain() {
    Train t(BASIC);  // constructor called here
}  // destructor called here

void testOutputTrain_1() {
    Train t(BASIC);
    std::cout << t << std::endl;
}

void testOutputTrain_02() {
    Train t(SMART);
    std::cout << t << std::endl;
}

void testTrainAddAndOutput_01() {
    Train t(BASIC);
    t.addPackage();
    std::cout << t << std::endl;
}

void testTrainAddAndOutput_02() {
    Train t(BASIC);
    t.addPackage();
    t.addPackage();
    std::cout << t << std::endl;
}

void testTrainAddAndOutput_03() {
    Train t(BASIC);
    t.addPackage();
    t.addPackage();
    t.addPackage();
    std::cout << t << std::endl;
}

void testTrainAddRemoveAndOutput_01() {
    Train t(BASIC);
    t.addPackage();
    std::cout << t << std::endl;
    t.removePackage();
    std::cout << t << std::endl;
}

void testTrainAddRemoveAndOutput_02() {
    Train t(BASIC);
    t.addPackage();
    std::cout << t << std::endl;
    t.addPackage();
    std::cout << t << std::endl;
    t.removePackage();
    std::cout << t << std::endl;
    t.removePackage();
    std::cout << t << std::endl;
}

void testTrainAddRemoveAndOutput_03() {
    Train t(BASIC);
    t.addPackage();
    t.addPackage();
    t.addPackage();
    std::cout << t << std::endl;
    t.removePackage();
    std::cout << t << std::endl;
    t.addPackage();
    std::cout << t << std::endl;
}

void testTrainRemoveEmpty_01() {
    Train t(BASIC);
    t.removePackage();
    std::cout << t << std::endl;
}

void testBasicUpsize_01() {
    Train t(BASIC);
    for (size_t i = 0; i < 7; ++i) {
        t.addPackage();
    }
    std::cout << t << std::endl;
}

void testBasicUpsize_02() {
    Train t(BASIC);
    for (size_t i = 0; i < 17; ++i) {
        t.addPackage();
    }
    std::cout << t << std::endl;
}

void testSmartUpsize_01() {
    Train t(SMART);
    for (size_t i = 0; i < 7; ++i) {
        t.addPackage();
    }
    std::cout << t << std::endl;
}

void testSmartUpsize_02() {
    Train t(SMART);
    for (size_t i = 0; i < 23; ++i) {
        t.addPackage();
    }
    std::cout << t << std::endl;
}

void testBasicDownsize_01() {
    Train t(BASIC);
    for (size_t i = 0; i < 7; ++i) {
        t.addPackage();
    }
    std::cout << t << std::endl;
    for (size_t i = 0; i < 7; ++i) {
        t.removePackage();
    }
    std::cout << t << std::endl;
}

void testBasicDownsize_02() {
    Train t(BASIC);
    for (size_t i = 0; i < 17; ++i) {
        t.addPackage();
    }
    std::cout << t << std::endl;
    for (size_t i = 0; i < 17; ++i) {
        t.removePackage();
    }
    std::cout << t << std::endl;
}

void testSmartDownsize_01() {
    Train t(SMART);
    for (size_t i = 0; i < 7; ++i) {
        t.addPackage();
    }
    std::cout << t << std::endl;
    for (size_t i = 0; i < 7; ++i) {
        t.removePackage();
    }
    std::cout << t << std::endl;
}

void testSmartDownsize_02() {
    Train t(SMART);
    for (size_t i = 0; i < 23; ++i) {
        t.addPackage();
    }
    std::cout << t << std::endl;
    for (size_t i = 0; i < 13; ++i) {
        t.removePackage();
    }
    std::cout << t << std::endl;
}

void interact(traintype ttype) {
    Train t(ttype);

    char action;
    std::cin >> action;

    while (action != ';') {
        if (action == 's') {
            t.addPackage();
        } else if (action == 'r') {
            t.removePackage();
        }
        std::cout << t << std::endl;
        std::cin >> action;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cout << "Expecting 1 command line argument: traintype [S|B]"
                  << std::endl;
        return 0;
    }

    traintype ttype = BASIC;
    if (*argv[1] == 'S') {
        ttype = SMART;
    } else if (*argv[1] == 'B') {
        ttype = BASIC;
    }

    ///////////////////////////////////
    // Car testing functions
    // testDeclareCar();
    // testOutputEmptyCar();
    // testAddPackage_1();
    // testAddPackage_2();
    // testAddPackage_3();
    // testAddPackage_4();
    // testAddPackage_5();
    // testAddPackageAndOutput_1();
    // testAddPackageAndOutput_2();
    // testAddPackageAndOutput_4();
    // testAddPackageAndOutput_5();
    // testAddRemovePackages_1();
    // testAddRemovePackages_2();
    // testAddRemovePackages_3();
    // testAddRemovePackages_4();
    // testAddRemovePackages_5();
    // testAddRemovePackages_6();

    ////////////////////////////////////
    // Train testing functions
    // testCreateTrain();
    // testOutputTrain_1();
    // testTrainAddAndOutput_01();
    // testTrainAddAndOutput_02();
    // testTrainAddAndOutput_03();
    // testTrainAddRemoveAndOutput_01();
    // testTrainAddRemoveAndOutput_02();
    // testTrainAddRemoveAndOutput_03();
    // testTrainRemoveEmpty_01();
    // testBasicUpsize_01();
    // testBasicUpsize_02();
    // testSmartUpsize_01();
    // testSmartUpsize_02();
    // testBasicDownsize_01();
    // testBasicDownsize_02();
    // testSmartDownsize_01();
    // testSmartDownsize_02();

    /////////////////////////////////////
    // Interactive shipping and receiving
    interact(ttype);

    return 0;
}
