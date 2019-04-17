#include <iostream>

int main(int argc, char** argv){
    int myArray[10];
    // initializes values
    for (int i = 0; i < 10; i++){
        myArray[i] = 0;
    }

    for (int i = 0; i < 10; i++){
        std::cout << "value[" << i << "]: " << myArray[i] << std::endl;
    }
    return 0;
}