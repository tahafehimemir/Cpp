//max.h diye bir dosyamız olsun
#ifndef MAX_H
#define MAX_H

//birden fazla dosyada template kullanımı

/*


template <typename T>

T max(T x, T y) {
	return (x < y) ? y : x;
}

#endif


//foo.cpp dosyamız olsun

#include "max.h" // import template definition for max<T>(T, T)
#include <iostream>

void foo()
{
	std::cout << max(3, 2) << '\n';
}

//main.cpp dosyamız olsun

#include "max.h" // import template definition for max<T>(T, T)
#include <iostream>

void foo(); // forward declaration for function foo

int main()
{
    std::cout << max(3, 5) << '\n';
    foo();

    return 0;
}

*/




/*

template <typename T>

T max(T x, T y) {
    return (x < y) ? y : x;

}


int main() {

    std::cout << max(2, 3.5) << '\n'; //compile error
    return 0;

    // we are passing two different types: one int and one double. Because we're making a function
    //call without using angled brackets to specify an actual type, the compiler will first look to
    //see if there is a non-template match for max(int,double)

    //Use static_cast to convert the arguments to matching types

    std::cout << max(static_cast<double>(2), 3.5) << '\n'; //convert our int to a double so we can call


    std::cout << max<double>(2, 3.5) << '\n';

  
    return 0;
}

//BEST WAY: use two template type parameters named T and U

template <typename T , typename U> 
auto max(T x, U y) { // x can resolve to type T and y can resolve to type U
    return (x < y) ? y : x;
}

int main() {
    std::cout << max(2, 3.5) << '\n'; //resolves to max<int, double>

    return 0;
}




//ABBREVIATED FUCNTION TEMPLATE

auto max(auto x, auto y) {
    return ....;
}



//if your parameters different kind
template <typename T, typename U>
auto max(T x, U y)
{
    return (x < y) ? y : x;
}

//if they are same kind
template <typename T>
T max(T x, T y) // two parameters of the same type
{
    return (x < y) ? y : x;
}




//ARE THEY OVERLOADED

#include <iostream>

// Add two values with matching types
template <typename T>
T add(T x, T y)
{
    return x + y;
}

// Add two values with non-matching types
// As of C++20 we could also use auto add(auto x, auto y)
template <typename T, typename U>
T add(T x, U y)
{
    return x + y;
}

// Add three values with any type
// As of C++20 we could also use auto add(auto x, auto y, auto z)
template <typename T, typename U, typename V>
T add(T x, U y, V z)
{
    return x + y + z;
}

int main()
{
    std::cout << add(1.2, 3.4) << '\n'; // instantiates and calls add<double>()
    std::cout << add(5.6, 7) << '\n';   // instantiates and calls add<double, int>()
    std::cout << add(8, 9, 10) << '\n'; // instantiates and calls add<int, int, int>()

    return 0;
}




//Non-ype template
#include <iostream>

template <int N> // int non-type template parameter
void print()
{
    std::cout << N << '\n';
}

int main()
{
    print<5>();   // no conversion necessary
    print<'c'>(); // 'c' converted to type int, prints 99

    return 0;
}


*/