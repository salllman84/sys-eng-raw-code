#include<iostream>
#include<vector>

std::vector <int> input(){
	std::cout<<"Enter first number: ";
	std::vector <int> userInput(2);
	std::cin>>userInput[0];
	
	std::cout<<std::endl;
	std::cout<<"Enter second number: ";
	std::cin>> userInput[1];

	return userInput;
}
