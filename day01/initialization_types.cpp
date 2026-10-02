#include <iostream>
/*
this code is testing the advanced 'initialzation of variables'.

this code only works on c++11 and onward.
*/


int main(){
//default initialization with no (initializer).

// int a;

//tradational initialization.
int a=5;	//copy-initialization
int b(6);	//direct-initialization

//modern initialization (preffered)
int c{7};	//direct-list-initialization.	(preffered)
// int c = {7}. 				(not-preffered)
int d{};	//direct-list-initialization with no values like (default)

std::cout<<"traditional initialization"<<std::endl;
std::cout<<"value of a: "<<a<<std::endl;
std::cout<<"value of b: "<<b<<std::endl;

std::cout<<"\n modern initialization \n";
std::cout<<"value of c: "<<c<<std::endl;
std::cout<<"value empty var d: "<<d<<std::endl;
return 0;
}

/*
	======================= NOTES =======================
	*This code will give copillation error if you run it on below c++11.
	*types of initialtion:

	1. default initialzation	[int a].
	2. copy initialzation		[int a=5]
	3. direct initialzation		[int a(5)]
	4. direct-list-initialization	[int a{5}]  OR  [int a = {5}.

	all first 3 types accepts "narrowing coversion" except direct-list-initialation.

	=== narrowing conversion ====
	" narrowing coversion means to translate one type value into another type "
	e.g: int  a = 4.5, or 
	     int  a(4.5), 
	the compilor understand that is an int type value, so he assign "a=4" not 'a=4.5'. BUT
	IF we  initialize a variable in direct-list-initialization type
		e.g: int a{4.5} or int a = {4.5}. THEN the compilor will through us an error. 'float can't be saved in 'int' type variables'.
		IMPORTANT NOTE: C++ experts preffered to use (direct-list-initialzation). b/c its bug free, you found the error it the begging and it allowes you
		to store multiple values in a single variable in the list.


		====== FOR MORE DETAILS PLEASE VISIT THE FOLLOWING PAGE ==========
		[ https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/ ].

*/
