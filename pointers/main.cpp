#include <iostream>

int main(int argc, char** argv){
    // Use heap memory, you can out any variable in the heap.
    int* myIntegerPointer = new int;

    std::cout << "Address:" << &myIntegerPointer << std::endl;
    // Set the value of the newly allocated heap integer.
    *myIntegerPointer = 8;

    // Get the value of the allocated heap integer.
    // derefence the pointer
    std::cout << "Value:" << *myIntegerPointer << std::endl;

    // Pointer that points to a variable on the stack.
    // To get a pointer to a variable, you use the & "address of" operator.
    int i = 12;
    myIntegerPointer = &i;

    std::cout << "Address:" << &myIntegerPointer << std::endl;
    std::cout << "Value:" << *myIntegerPointer << std::endl;


    return 0;
}