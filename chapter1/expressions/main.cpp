#include <iostream>

int main(int argc, char** argv){
    // origin: int i = 34 + 8 * 2 + 21 / 7 % 2;
    int i = 34 + (8 * 2) + ( (21 / 7) % 2 );
    std::cout << "value de is: " << i << std::endl;
    return 0;
}