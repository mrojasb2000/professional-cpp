#include <iostream>
#include "functions.h"

int main(int argc, char** argv){
    myFunction(1, 'M');

    int someInt = 8;
    myFunction(someInt, 'M');
    char someChar = 'b';
    myFunction(1, someChar);

    std::cout << "Sum 1 + 2 =" << addNumbers(1,2) << std::endl; 

    return 0;
}