#include <iostream>
#include <limits>
#include "decide.h"

int operationDecision(){
    std::cout<<"please decide the operation"<<std::endl;
    std::cout<<"please enter 1 for addition"<<std::endl;
    std::cout<<"please enter 2 for subtraction"<<std::endl;
    std::cout<<"please enter 3 for multiplication"<<std::endl;
    std::cout<<"please enter 4 for division"<<std::endl;
    std::cout<<"======================================================================================"<<std::endl;
    std::cout<<"======================================================================================"<<std::endl;

    int decision {};
    std::cout<<"Enter your operation number from 1 to 4: ";
    std::cin>>decision;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout<<std::endl;

    // Fixed: Changed || to && so valid entries break out of the loop
    if(decision != 1 && decision != 2 && decision != 3 && decision != 4){
        std::cout<<"your input "<<decision<<" is wrong please enter any number in between 1 and 4"<<std::endl;
        return operationDecision(); // Added return to safely propagate the valid input back
    }

    return decision;
}
