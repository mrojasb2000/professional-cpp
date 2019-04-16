#include <iostream>

int main(int argc, char** argv){
    int i = 6;
    if (i > 4){
        std::cout << i << std::endl;
    } else if (i > 2){
        std::cout << i << std::endl;
    } else {
        std::cout << i << std::endl;
    }

    switch (i) {
        case 1:{
            std::cout << i << std::endl;
            break;
        }
        case 2:{
            std::cout << i << std::endl;
            break;
        }
        case 3:{
            std::cout << i << std::endl;
            break;
        }
        default:{
            std::cout << "default" << std::endl;
        }
    }

    std::cout << "((i > 2) ? 'yes' : 'no'): " << ((i > 2) ? "yes" : "no"); 

    return 0;
}