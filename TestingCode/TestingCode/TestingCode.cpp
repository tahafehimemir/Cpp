#include <iostream>
#include <casset>
#include <cstdlib>


/*
//INFORMAL TESTING


constexpr bool  isLowerVowel(char c)
{
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;
    default:
        return false;
    }
}

//ASSERT METHOD

int testVowel() {

#ifdef NDEBUG
    //If NDEBUG is defined, asserts are compiled out.since this function requeires asserts to not bet compiled out,
    // we'll terminate the program if this function is called when NDEBUG is defined.
    std::cerr << "Tests run with NDEBUG defined (asserts compiled out)";
    std::abort();
#endif // NDEBUG

    static_assert(isLowerVowel('a'),"Hata");
    assert(isLowerVowel('e'));
    assert(isLowerVowel('i'));
    assert(isLowerVowel('o'));
    assert(isLowerVowel('u'));
    assert(!isLowerVowel('b'));
    assert(!isLowerVowel('q'));
    assert(!isLowerVowel('y'));
    assert(!isLowerVowel('z'));

    return 0;

}





//Preserving your tests

void testVovel() { // as you create more tests, you can simply add them to the test function
    std::cout << isLowerVowel('a') << '\n'; // temporary test code, should produce 1
    std::cout << isLowerVowel('q') << '\n'; // temporary test code, should produce 0
}

int main()
{
    // So here's our temporary tests to validate it works
    std::cout << isLowerVowel('a') << '\n'; // temporary test code, should produce 1
    std::cout << isLowerVowel('q') << '\n'; // temporary test code, should produce 0

    return 0;
}
*/



//CODE COVERAGE
//is used to describe how much of the source code of a program is executed wihle testing. There are many different metrics used for code coverage. 

//  Statement coverage
//    Refers to the percentage of statements in your code that exercised by your testing routines.

/*
int foo(int x, int y) {

    int z{ y };
    if (x > y) {
        z = x;
    }
    return z;
} // If we call this function with foo(1,0) wil give us a compleete coverage for this function, every statement of function will execute.

//in our isLowerVowel function above there is no way to reach statement 2 and 3 in the same function call

//   Branch coverage
//     Refers to the precentage of branches that have been executed, each possible branch counted seperately.


//   Loop Coverage
// Informally called the 0,1,2 test. if you have loop in your code, you should ensure it works properly when it iterates 0 times, 1 times, and 2 times


*/






//SEMANTIC ERRORS

//  Conditional Logic Errors 
//      When programmer incorrectly codes the logic of a conditional statement or loop condition.

//  Infınite Loops

//  Off by one errors  
//      Error that occurs when a loop executes one too many or one too few times. FOR EXMP: we need to print 0-5 but program prints 0-4

//  Incorretct Operator Precedence









//HANDLING ERRORS
/*

void printIntDivision(int x, int y)
{
    if (y != 0)
        std::cout << x / y;
    else
        std::cout << "Error: Could not divide by zero\n";
}

double doIntDivision(int x, int y)
{
    if (y == 0)
    {
        std::cout << "Error: Could not divide by zero\n";
        std::exit(1);
    }
    return x / y;
}


std::cin.ignore(100, '\n');  // clear up to 100 characters out of the buffer, or until a '\n' character is removed

double getDouble()
{
    while (true) // Loop until user enters a valid input
    {
        std::cout << "Enter a decimal number: ";
        double x{};
        std::cin >> x;

        if (!std::cin) // If the previous extraction failed
        {
            // Let's handle the failure
            std::cin.clear(); // Put us back in 'normal' operation mode
            ignoreLine();     // And remove the bad input
            continue;
        }

        // Our extraction succeeded
        ignoreLine(); // Ignore any extraneous input
        return x;     // Return the value we extracted
        */


/*
void printDivision(int x, int y) {

    if (y != 0) {
        std::cout << static_cast<double>(x) / y;

    }
    else {
        std::cerr << "Error: Could not divide by zero\n";
    }

}
*/






//ASSERTION

// expression that will be true unless there is a bug in the program. If the expression evaluates to true, the assertion statement does nothing. 
// If the conditional expression evaluates to false, an error message is displayed and the program is terminated (via std::abort). 
//This error message typically contains the expression that failed as text, along with the name of the code file and the line number of the assertion.

#include <cassert> // for assert()
#include <cmath> // for std::sqrt
#include <iostream>

double calculateTimeUntilObjectHitsGround(double initialHeight, double gravity)
{
    assert(gravity > 0.0); // The object won't reach the ground unless there is positive gravity.

    if (initialHeight <= 0.0)
    {
        // The object is already on the ground. Or buried.
        return 0.0;
    }

    return std::sqrt((2.0 * initialHeight) / gravity);
}

int main()
{
    std::cout << "Took " << calculateTimeUntilObjectHitsGround(100.0, -9.8) << " second(s)\n";

    return 0;
}


//assert(found && "Car could not be found in database");

/*many developers prefer that asserts are only active in debug builds.
C++ comes with a way to turn off asserts in production code. If the macro NDEBUG is defined, the assert macro gets disabled.


static_assert
assertion that is checked at compile time rather than runtime, with a failing static_assert causing compile error.

static_assert(sizeof(long) == 8, "long must be 8 bytes");
static_assert(sizeof(int) >= 4, "int must be at least 4 bytes");

int main()
{
    return 0;
}

*/