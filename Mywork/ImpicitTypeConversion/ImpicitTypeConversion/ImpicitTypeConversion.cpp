#include <iostream>


using namespace std;


/*
void printInt(int x) {
	cout << x << '\n';
}


int main() {

	printInt(2);

	short   s{ 3 };
	printInt(s); //numeric promotion of short to int 

	printInt('a'); //numeric promotion ıf char to int
	printInt(true); //numeric promotion of bool to int



	return 0;
}
*/

/*

void someFcn(int i) {}

int main() {
	double d{ 5.0 };
	double f{ 3.5 };

	int i{ static_cast<int>(f) }; //converts double to int, initializes i with int result

	someFcn(d); //implicit narrowing conversion will generate compiler warning

	someFcn(static_cast<int>(d)); // no warning will be generated

	return 0;
}
*/








//ALIASES

/*
using Distance = double; //define distance as an alias for type double
Distance milesToDestination{ 3.4 };


//The following aliases are identical
typedef long Miles;
using Miles = long;


//typedef Distance double --> wrong expression typedef name first
//typedef double Distance --> Correct expression aliased type name first

#ifdef INT_2_BYTES
using int8_t = char;
using int16_t = int;
using int32_t = long;
#else
using int8_t = char;
using int16_t = short;
using int32_t = int;
#endif

int main() {
	std::int8_t x{ 97 }; //int8_t is usually a typedef for signed char
	std::cout << x << '\n';
}
*/

//Using type aliases to document the meaning of a value

//int gradeTest();

//using TestScore = int;
//TestScore gradeTest();



//TYPE DEDUCTION

auto add(int x, int y) {
	return x + y;
}

//When using an auto return type, all return statements within the funciton must values of the same typ.

// Can be used as trailing return syntax. 

auto add(int x, int y) -> int {
	return(x + y);
}