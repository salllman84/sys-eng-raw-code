#include<vector>
#include <iostream>
#include "subtraction.h"

float subtraction(std::vector<float> values){
    float result {};
    result = values[0] - values[1]; // Fixed brace assignment

    return result;
}