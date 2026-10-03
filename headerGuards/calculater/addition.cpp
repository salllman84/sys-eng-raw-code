#include<iostream>
#include<vector>
#include "addition.h"

float addition(std::vector<float> values){
    float sum{0};
    for (float value : values){
        sum +=value;
    }
    return sum;
}