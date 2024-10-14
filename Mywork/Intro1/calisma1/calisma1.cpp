#include <iostream>
#include <string> // std::strng name {}; gibi ifadeleri yazabilmek için
#include <string_view> //provides read-only access to an eisting string. We can acces and use not modify.

/*
void printStringView(std::string_view str) {
	std::cout << str << '\n';
}
*/



/*
void printString(std::string str) {
	std::cout << str << '\n';
}

*/



/*
constexpr double calcCircumference(double radius){
	//derleme zamanınd derleme ve hesaplama yapması için.
	//constant expression yoksa run time'da yapmak durumundasın int x gibi bir ifadedeki x'i alıp compile time'da calıstıramazsın

	constexpr double pi {3.14159265359};
	return 2.0 * pi * radius;

}



/*
inline double pi() {
	return 3.14159;
}
*/


/*
void print(int x) {

	std::cout << x << '\n';

}
*/


/*
bool areYouOkeytoGo(int heigth) {

	if (heigth >= 170) {

		return true;
	}
	else {
		return false;
	}

}

*/



/*
bool isEqual(int x, int y){

	return x == y;

}
*/


int main() {

	int x = 5;
	int y = 7;
	constexpr double radius{ 3.0 };


	//std::cout << "Hello world!"; çıkış almak için

	//std::cin >> x; input almak için
	//int x = 5;  //kopyalamayla
	//int x{ 5 }; //atamayla

	/*bool b = false;
	bool b1{ true };
	bool b2{ false };
	b1 = false; //
	bool b3{}; //default initialize false

	//std::cout << b1 << '\n';// 0 döndürecek


	std::cout << std::boolalpha;

	bool bFalse{ 0 };
	bool bTrue{ 1 };
	bool bNo{ 2 };

	std::cout << bFalse << bTrue << bNo << '\n';
	*/

	/*
	int z = isEqual(x, y);

	std::cout << z << '\n'; // std::cout << isEqual(x,y) << '\n';


	*/

	/*if (x < y) {
		std::cout << "y is greater than x!";
	}

	greater = ((x>y) ? x : y;
	*/

	/*
	std::cout << "Please enter your height(cm): ";
	int height;
	std::cin >> height;
	
	if (areYouOkeytoGo(height)){
		std::cout << "You are okey to go :)";

	}
	else {
		std::cout << "Sorry you are too short to go :(";
	}
	*/
	
	//print(static_cast<int>(5.7));
	
	/*
	std::int8_t myInt{ 61 };
	std::cout << static_cast<int>(myInt) << '\n';
	*/

	/*
	const double gravity = 9.83; //const variables must be initialized
	gravity = 9.9; //const variables can not be changed
	*/


	//constexpr double circumference{ calcCircumference(3.0) }; //compile etmesi için fonkiyonun da constexpr olması gerek.

	/*
	std::string name{ "Taha" };
	
	std::cout << "My name is: " << name << '\n';
	//burada std::cin >> yapısını kullanırsak sadece tek bir kelime yazabiliyoruz boşluk yapısı sonrakine geçer.
	// bu nedenle std::getline(std::cin >> std::ws, name); gibi bir yapı kullanarak tüm satırı alabiliriz.
	
	std::string name{};

	std::cout << "Please enter your full name : ";
	std::getline(std::cin >> std::ws, name);
	std::cout << "Your name is: " << name << '\n';
	std::string name2{ "Ali"};
	std::cout << name2 << " has " << name2.length() << " characters\n";
	*/
	
	/*
	std::string s{ "Hello world!" };
	std::cout << s << '\n'; //s burada metnin genelini alır.

	printString(s);
	*/


	/*
	std::string name{ "Taha" };
	std::string_view sv{ name };
	std::cout << sv << '\n'; //prints Taha

	sv = "Fehim"; //sv is now viewing Fehim (but not changing name)
	std::cout << sv << '\n';//prints Fehim


	std::cout << name << '\n';//prints Taha
	*/

	
	return 0;
}