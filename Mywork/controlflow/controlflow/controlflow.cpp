#include <iostream>



/*CONSTEXPR IF STATEMENT
int main() {
	//constexpr conditional evaluates to true, the entire if-else will be replaced by the true-statement. 
	//If the constexpr conditional evaluates to false, the entire if-else will be replaced by the false-statement (if it exists) or nothing (if there is no else).
	constexpr double gravity{ 9.8 };
	if constexpr (gravity == 9.8) {
		std::cout << "Gravity is normal..";
	}
	else {
		std::cout << "You are not on earth";
	}


	return 0;
}

*/


/*
SWITCH CASE 


void printDigitName(int x) {

	switch (x) {

	case 1:
		std::cout << "One";
		return;
	case 2:
		std::cout << "Two";
		return;
	case 3: 
		std::cout << "Three";
		return;
	default;
		std::cout << "Unknown";
		return;

	}

}

int main() {

	printDigitName(2);
	std::cout << '\n';

	return 0;
}

*/






/*

//GO TO STATEMENT

#include <cmath> //for sqrt()

int main() {

	double x{};
tryagain:
	std::cout << "Enter a positive number: ";
	std::cin >> x;


	if (x < 0.0)
		goto tryagain;

	std::cout << "The square root of " << x << " is " << std::sqrt(x) << '\n';
	return 0;


}
*/







/*
int main() {

	int count{ 1 };
	while (count <= 10) {
		
		std::cout << count << ' ';
		++count;

	}

	std::cout << "done";

	return 0;

}
*/



/*
int main() {

	for (int i = 0; i <=10; ++i)
	{
		std::cout << i << ' ';
	}

	return 0;
}
*/


//std::exit(0) ile progamdan çıkılır.
//#include <cstdlib>



