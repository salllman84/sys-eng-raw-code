#include<iostream>

int userInput(){
	std::cout<<"Enter any number: ";
	int input{};
	std::cin>>input;
	
	return input;
}

int main(){
	int doubleNum { userInput() };
	std::cout<< doubleNum <<" double is: " << doubleNum * 2 <<std::endl;
return 0;
}
