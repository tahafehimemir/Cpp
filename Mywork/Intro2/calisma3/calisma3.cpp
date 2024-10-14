#include <iostream>
#include <string>

using namespace std;
/*
//a.cpp 'de olsun alttaki fonksyion
void sayHi() {
	//this function has external linkage, and can be seen by other files

	cout << "Hi! \n";

}

//main .cpp içinde void sayHi(); forward decleration for function sayHi , makes sayhi accessible in this file.
// Fonksiyonu main içinde çağırınca linker will connect this call to the function definition.




static int g_x{}; //non constant globals have external linkage by default, but can given internal linkage via the static keyword
const int g_y{ 1 };// const globals have internal linkage by default
constexpr int g_z{ 2 }; // constexpr globals gave internal linkage by default

extern const int g_m{ 3 };//const globals can be defined as extern, making them external
extern constexpr int g_l{ 3 }; //constexpr globals can be defined as extern , making them external(this is pretty useless, see the warning) can't be forward declared
*/





/*

//constants.h dosyamız olsun..
#ifndef  CONSTANTS_H
#define CONSTANTS_H

//define your own namespace to hold constants

namespace constants {

	//constants have internal linkage by default
	constexpr double pi{ 3.14 };
	constexpr double avagadro{ 6.02 };
	constexpr double myGravity{ 9.2 };
	//other ones...


}
#endif


//main.cpp içinde bunu
#include "constants.h"

int main() {

	//mainden ulaşım şu şekilde olur
	std::cout << "Enter a radius: ";
	double radius{};
	std::cin >> radius;

	std::cout << "The circumference is: " << 2 * radius * constants::pi << '\n';
	return 0;
}


*/




/*

//constants.cpp olsun elimizde
#include "constants.h"

namespace constants
{
	// actual global variables tanımladık
	extern constexpr double pi{ 3.14159 };
	extern constexpr double avogadro{ 6.0221413e23 };
	extern constexpr double myGravity{ 9.2 };
}



//constants.h olsun burada da
#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace constants
{
	// since the actual variables are inside a namespace, the forward declarations need to be inside a namespace as well
	// we can't forward declare variables as constexpr, but we can forward declare them as (runtime) const
	extern const double pi;
	extern const double avogadro;
	extern const double myGravity;
}

#endif


*/




/*

void incrementation() {

	static int s_val{ 1 }; //static olarak tanımladığımı için sadece bir kez execute edilecek.
	++s_value;
	std::cout << s_value << '\n';
}

int main() {
	incrementation();
	incrementation(); //static olarak tanımlamamış olsak her seferinde aynı değer dönerdi
}


int generateID() {
	//kullanım alanı örneği
	static int s_itemID{ 0 };
	return s_itemID++; //makes copy of s_itemIDi, increment it and return the value of copy



}
*/




/*
//DECLARATIONS

std::cout //identifier cout is qualified by namespace std
::foo //qualified by global namespace

class C; //some class

C::s_member; //s member is qualified by class C
obj.x;  //x is qualified by class object obj
ptr->y; //y is qualified by pointer to class object ptr
*/


/*
using std::cout; // tell the compiler that cout means std::cout
cout << "Hello, world!\n"; // so this means std::cout



//foolib.h

#ifndef FOOLIB_H
#define FOOLIB_H

namespace Foo
{
	// pretend there is some useful code that we use here
}
#endif


//main.cpp

#include <iostream>
#include <foolib.h> // a third-party library, thus angled brackets used

int someFcn(double)
{
	return 1;
}

int main()
{
	using namespace Foo; // Because we're lazy and want to access Foo:: qualified names without typing the Foo:: prefix
	std::cout << someFcn(0) << '\n'; // The literal 0 should be 0.0, but this is an easy mistake to make

	return 0;
}
*/







/*
//UNNAMED NAMESPACE

namespace {

	void doSomething() {
		std::cout << "v1\n";
	}
}

static void doSomething() // can only be accessed in this file
{
	std::cout << "v1\n";
}


int main() {

	doSomething(); //we can call doSomething() without a namespace prefix

	return 0;

}


inline namespace V1 // declare an inline namespace named V1
{
	void doSomething()
	{
		std::cout << "V1\n";
	}
}

namespace V2 // declare a normal namespace named V2
{
	void doSomething()
	{
		std::cout << "V2\n";
	}
}

int main()
{
	V1::doSomething(); // calls the V1 version of doSomething()
	V2::doSomething(); // calls the V2 version of doSomething()

	doSomething(); // calls the inline version of doSomething() (which is V1)

	return 0;
}

*/
