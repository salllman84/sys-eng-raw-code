#include <iostream>
#include <vector>
#include "division.h"

float division(std::vector<float> values){
    float result {};
    result = values[0] / values[1]; // Fixed brace assignment

    return result;
}