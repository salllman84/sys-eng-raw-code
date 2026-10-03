#include <iostream>
#include <vector>
#include "decide.h"
#include "numberInput.h"
#include "addition.h"
#include "multiplication.h"
#include "division.h"
#include "subtraction.h"
#include "output.h"

int main(){
    int decision {operationDecision()};
    std::vector<float> input{userInput(decision)};
    float result {};

    if(decision == 1){
        result = addition(input); // Fixed brace assignment
    } else if(decision == 2){
        result = subtraction(input); // Fixed brace assignment
    } else if(decision == 3){
        result = multiplication(input); // Fixed brace assignment
    } else{
        result = division(input); // Fixed: Changed from addition to division
    }

    std::cout<<"================ SHOWING RESULT ================="<<std::endl;
    displayResult(decision, input, result);

    return 0;
}
