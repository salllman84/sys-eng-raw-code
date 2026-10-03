#include <iostream>
#include <vector>
#include <cstdlib> // Added for std::exit
#include <limits> // added for emptying buffer
#include "numberInput.h"

std::vector<float> userInput(int decide){
    std::vector<float> values{};
    float numInput_1 {}, numInput_2 {};
    
    if(decide == 1){
        std::cout<<"Enter first number to perform addition : ";
        std::cin>>numInput_1;
        std::cin.ignore(std::numeric_limits<std::streamsize> :: max(), '\n');
        values.push_back(numInput_1);
        std::cout<<std::endl;

        std::cout<<"Enter second number to perform addition : ";
        std::cin>>numInput_2;
        std::cin.ignore(std::numeric_limits<std::streamsize> ::max(), '\n');
        values.push_back(numInput_2);
        std::cout<<std::endl;

    } else if(decide == 2){
        std::cout<<"Enter first number to perform subtraction : ";
        std::cin>>numInput_1;
        std::cin.ignore(std::numeric_limits<std::streamsize> ::max(), '\n');
        values.push_back(numInput_1);
        std::cout<<std::endl;

        std::cout<<"Enter second number to perform subtraction : ";
        std::cin>>numInput_2;
        std::cin.ignore(std::numeric_limits<std::streamsize> ::max(), '\n');
        values.push_back(numInput_2);
        std::cout<<std::endl;

    } else if(decide == 3){
        std::cout<<"Enter first number to perform multiplication : ";
        std::cin>>numInput_1;
        std::cin.ignore(std::numeric_limits<std::streamsize> ::max(), '\n');
        values.push_back(numInput_1);
        std::cout<<std::endl;

        std::cout<<"Enter second number to perform multiplication : ";
        std::cin>>numInput_2;
        std::cin.ignore(std::numeric_limits<std::streamsize> ::max(), '\n');
        values.push_back(numInput_2);
        std::cout<<std::endl;

    } else {
        std::cout<<"Enter first number to perform division : ";
        std::cin>>numInput_1;
        std::cin.ignore(std::numeric_limits<std::streamsize> ::max(), '\n');
        values.push_back(numInput_1);
        std::cout<<std::endl;

        std::cout<<"Enter second number to perform division : ";
        std::cin>>numInput_2;
        std::cin.ignore(std::numeric_limits<std::streamsize> ::max(), '\n');
        std::cout<<std::endl;

        if(numInput_2 == 0){
            std::cout<<"please enter a valid denominator not "<<numInput_2<<" denominator must be greater then "<<numInput_2<<std::endl;
            char validateInput;
            std::cout<<" ====================== press 'y' to validate denominator OR 'n' to cancel the operation ===================: ";
            std::cin>>validateInput;
            std::cin.ignore(std::numeric_limits<std::streamsize> ::max(), '\n');
            std::cout<<std::endl;

            if(validateInput == 'y'){
                std::cout<<"Please enter a valid DENOMINATOR: ";
                std::cin>>numInput_2;
                std::cin.ignore(std::numeric_limits<std::streamsize> ::max(), '\n');
                std::cout<<std::endl;
            } else{
                std::exit(0);
            }
        }
        values.push_back(numInput_2);
    }

    return values;
}