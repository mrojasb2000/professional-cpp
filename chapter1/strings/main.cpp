#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv){
    //C-Style Strings
    char arrayString[20] = "Hello, World";
    std::cout << "String: " << arrayString << std::endl;
    const char *pointerString = "Hello, World";
    std::cout << "String: " << pointerString << std::endl;

    //C++ Strings
    string myString = "Hello, World";
    std::cout << "String: " << myString << std::endl;

    string str1 = "Hello";
    string str2 = "World";
    string str3 = str1 + " " + str2;
    
    cout << "str1 is " << str1 << endl;
    cout << "str2 is " << str2 << endl;
    cout << "str3 is " << str3 << endl;

    if (str3 == "Hello World") {
        cout << "str3 is what it should be." << endl;
    } else {
        cout << "Hmmm ... str3 isn't what it should be." << endl;
    }


    return 0;
}