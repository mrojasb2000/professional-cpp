#include <iostream>

int main(int argc, char** argv){
    int someInt = 0;

    bool someBool1 = (bool)someInt;              // method 1
    std::cout << "someBool1: " << someBool1 << std::endl;
    bool someBool2 = bool(someInt);              // method 2
    std::cout << "someBool2: " << someBool2 << std::endl;
    bool someBool3 = static_cast<bool>(someInt); // method 3
    std::cout << "someBool3: " << someBool3 << std::endl;
    return 0;
}