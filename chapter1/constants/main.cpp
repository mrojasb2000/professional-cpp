#include <iostream>
#include <string>

using namespace std;

void mysteryFunction(const char* myString);

typedef struct
{
    int value;
} PairT;

void constantReference(PairT const& pair);




int main(int argc, char** argv){

    // Const contants
    const float kVersionNumber = 2.0;
    const string kProductName = "Super Kyper Net Modulator";

    std::cout << "Product Name   : " << kProductName << std::endl;
    std::cout << "Product Version: " << kVersionNumber << std::endl;

    // Const to protect variables == final (java)
    char* myString = new char[2];
    myString[0] = 'a';
    myString[1] = '\n';

    //mysteryFunction(myString);

    // Const references (pointers constants)
    PairT myPair;
    myPair.value = 10;
    constantReference(myPair);

    return 0;
}