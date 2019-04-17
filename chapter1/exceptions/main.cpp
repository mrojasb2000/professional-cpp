#include <iostream>
#include <stdexcept>
#include "exceptions.h"

int main(int argc, char** argv){
    try {
        std::cout << divideNumbers(2.5, 0.5) << std::endl;
        std::cout << divideNumbers(2.3, 0) << std::endl;
    }catch(std::exception exception){
        std::cout << "An exception was caught!" << std::endl;
    }
    return 0;
}