#include <iostream>

/*
this program is wriiten to implement '[[maybe_unsed]]' attribute.

	==== introduction ===
	[[maybe_unused]] attribute we use, when we initialized those variables which we
	did not used in the program but somehow we need those variables to exist in the program.
	
	this program output the address of objects (variables).
*/
int main(){

int a{};
int c{};

// int d{};     this line through compilation error.

//corrected version is to used the  [[maybe_unused]] attribute
[[maybe_unused]] int d{}; 

//we didn't use object (d) to test that it still through error or not.
std::cout<<&a<< ','<<std::endl<<&c<<std::endl;
return 0;
}
