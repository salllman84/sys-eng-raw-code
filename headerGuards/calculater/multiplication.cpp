#include <iostream>
#include <vector>
#include "multiplication.h"

float multiplication(std::vector<float> values){
    float result {1};
    for(float value : values){
        result *= value;
    }

    return result;
}