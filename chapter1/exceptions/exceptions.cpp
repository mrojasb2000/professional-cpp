#include <stdexcept>

double divideNumbers(double inNumerator, double inDenominator){
    if (inDenominator == 0){
        throw std::exception();
    }
    return (inNumerator / inDenominator);
}