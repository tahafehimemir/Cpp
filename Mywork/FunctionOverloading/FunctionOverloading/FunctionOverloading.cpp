#include <iostream>

/*
int add(int x, int y) {

	return x + y;
}


double add(double x, double y) {


	return x + y;
}

//Parameter types are different so compiler can differentiate these functions each other.


int add(int x, int y, int z) {

	return x + y + z;
}

int main() {
	typedef int Height; //typedef
	using age = int; //tpye alias

	void print(int value);
	void print(age value);
	void print(Height value); //same

	void print(int);
	void print(const int); //same

	// A functions return type is not considered when differentiating overloaded functions

	int getRandomValue();
	double getRandomValue(); //if you write getRandomValue() compiler cant understand which is so you need to write them with different adress

	int getRandomInt();
	double getRandomDouble();


	//compiler first try to find exact match. If not tries to applying numeric promotion to the argments. If not compiler tries to match by applying numeric conversions. If not compiler tries to find a match trough any user-defined conversations.


	return 0;
}
*/



/*
//DELETING FUNCTION

void printInt(int x) {
	std::cout << x << '\n';
}

void printInt(char) = delete; //call to this function will halt compilation
void printInt(bool) = delete;

int main() {

	printInt(97); //will be okey

	printInt('a'); //error: function deleted
	printInt(true); //error: function deleted

	printInt(5.0); // error: ambiguous match

	return 0;
}

*/


/*
void print(int x, int y = 5) {
	std::cout << "x: " << x << '\n';
	std::cout << "y: " << y << '\n';
}

void foo(int x = 5); //is okey
void foo(int x(5)); // compile error
void foo(int x{ 5 }); // compile error


int main() {

	print(7, 8); //call normaly x = 7 y = 8
	print(7); //x=7 y will be 5





	return 0;
}
*/





//TEMPLATES

//instead of manually creating a bunch of mostly identical functions or classes, we instead create a single template. Just like normal definition
// a template describes what a function or class looks like. 


T max(T x, T y) {
	return (x < y) ? y : x; //wont compile because we haven't defined T
}


template <typename T> // This is the template parametere declaration
T max(T x, T y) {//this is the function template definition for max <T>

	return (x < y) ? y : x;
}


int main() {
	std::cout << max<int>(1, 2) << '\n'; //instantiates and calss function max<int>(int int)

	return 0;
}


template <typname T>
T max(T x, T y);

template<>
int max<int>(int x, int y) {

	return (x < y) ? y : x;


}

int main() {
	std::cout << max<int>(1, 2) << '\n'; //instantiates and calls function max<int>(int,int)
	return 0;
}