#include <iostream>

/*
testing: how cin works for different input

*/

int main(){
int a{}, b{}, c{};
	std::cout<<"Enter 3 three numbers: ";
	std::cin>>a>>b>>c;

	std::cout<<"your numbers are "<<a<<", "<<b<<", "<<"and "<<c<<std::endl;
return 0;
}
/*
 	NOTE: remember buffer concept of input/output
	input: if u enter value through console it store in 'buffer' then extracted into the variable if the entered value
	type matched with the variable type. 
	
	example: int a{}, b{};
	std::cin>>a>>b; // you entered 5 and 6 and press enter. BUFFER = 5 6\n.
	these two values stored in buffer, check type, then extracted into a=5 b=6 and new line will print.

	if you enter these values: 5cba and 6.
	the buffer will store: 5cba 6\n
	now 5 will extracted to (a), then in buffer cba 6\n exist, so this is not a valid 'int' type, so 'b' will be '0'. because the buffer has different kind of value.
 =========== OUTPUT ============
systemEngineer@BugFixed:~/systems-engineering/day01$ ./program.cpp
	Enter 3 three numbers: 12 13 14
	your numbers are 12, 13, and 14
systemEngineer@BugFixed:~/systems-engineering/day01$ ./program.cpp
	Enter 3 three numbers:  1 2 3
	your numbers are 1, 2, and 3
systemEngineer@BugFixed:~/systems-engineering/day01$ ./program.cpp
	Enter 3 three numbers: 12  13  14
	your numbers are 12, 13, and 14
systemEngineer@BugFixed:~/systems-engineering/day01$ ./program.cpp
	Enter 3 three numbers: h 3.5 .5
	your numbers are 0, 0, and 0
systemEngineer@BugFixed:~/systems-engineering/day01$ ./program.cpp
	Enter 3 three numbers: -3 -5 -10
	your numbers are -3, -5, and -10
systemEngineer@BugFixed:~/systems-engineering/day01$ ./program.cpp
	Enter 3 three numbers: hello Salman Khan
	your numbers are 0, 0, and 0
systemEngineer@BugFixed:~/systems-engineering/day01$ ./program.cpp
	Enter 3 three numbers: 1000000000 200000000 300000000
	your numbers are 1000000000, 200000000, and 300000000
systemEngineer@BugFixed:~/systems-engineering/day01$ ./program.cpp
	Enter 3 three numbers: 123abc 231bca 321cba
	your numbers are 123, 0, and 0
systemEngineer@BugFixed:~/systems-engineering/day01$ ./program.cpp
	Enter 3 three numbers: abc123 bac231 cab213
	your numbers are 0, 0, and 0
systemEngineer@BugFixed:~/systems-engineering/day01$ ./program.cpp
	Enter 3 three numbers:    +5   +6   +7
	your numbers are 5, 6, and 7
systemEngineer@BugFixed:~/systems-engineering/day01$ ./program.cpp
	Enter 3 three numbers: 5b6 7c8 8d9
	your numbers are 5, 0, and 0
