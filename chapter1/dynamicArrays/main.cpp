#include <iostream>
#include <new>
using namespace std;

int main(int argc, char** argv){
    int arraySize = 8;
    // declare a pointer for dynamic array
    // refers to some integer memory uninitialized in the heap.
    //int * myVariableSizedArray;   

    // initialize the pointer to new heap memory.
    int* myVariableSizedArray = new (nothrow) int[arraySize]; //&arraySize; 

    myVariableSizedArray[3] = 2;

    delete[] myVariableSizedArray;  //remove it from the heap

    return 0;
}