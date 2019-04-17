#include <iostream>
#include "functions.h"

int main(int argc, char** argv){
    int i = 6;
    addOne(i);
    std::cout << "By Value    : " << i << std::endl;
    addOneRef(i);
    std::cout << "By Reference: " << i << std::endl;
    return 0;
}