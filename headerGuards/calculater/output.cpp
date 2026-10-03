#include <iostream>
#include "output.h"
#include <vector>

void displayResult(int decision, std::vector<float> input, float result){
    if(decision == 1){
        std::cout<<"Sum of " <<input[0]<< " + " <<input[1]<<" = " << result<<std::endl;
    } else if(decision == 2){
        std::cout<<"subtraction of " <<input[0]<< " - " <<input[1]<<" = " << result<<std::endl;
    } else if(decision == 3){
        std::cout<<"multiplication of " <<input[0]<< " x " <<input[1]<<" = " << result<<std::endl;
    } else{
        std::cout<<"Division of " <<input[0]<< " / " <<input[1]<<" = " << result<<std::endl;
    }
}