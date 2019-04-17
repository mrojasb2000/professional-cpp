#include <iostream>

int main(int argc, char** argv){
    int i = 0;
    while (i < 5){
        std::cout << "While - This is silly." << std::endl;
        i++;
    }

    int j = 100;
    do {
        std::cout << "Do/While - This is silly." << std::endl;
    } while(j < 5);

    for (int k = 0; k < 5; k++){
        std::cout << "For - This is silly." << std::endl;
    }

    return 0;
}