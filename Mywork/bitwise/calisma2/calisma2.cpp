#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main() {

	/* bit flags and manupilation
	bitset<8> mybitset{}; //8 bits in size means room for 8 flags.

	bitset<8> bits{ 0b0000'0101 }; //we need 8 bits, start with pattern
	bits.set(3);
	bits.flip(4);
	bits.reset(4);

	cout << "All the bits: " << bits << '\n';
	cout << "Bit 3 has value : " << bits.test(3) << '\n';
	cout << "Bit 4 has value: " << bits.test(4) << '\n';



	constexpr int  isHungry{ 0 };
	constexpr int  isSad{ 1 };
	constexpr int  isMad{ 2 };
	constexpr int  isHappy{ 3 };
	constexpr int  isLaughing{ 4 };
	constexpr int  isAsleep{ 5 };
	constexpr int  isDead{ 6 };
	constexpr int  isCrying{ 7 };

	bitset<8> me{ 0b0000'0101 };
	me.set(isHappy);
	me.flip(isLaughing);
	me.reset(isLaughing);

	cout << "All the bits: " << me << '\n';
	cout << "I am happy: " << me.test(isHappy) << '\n';
	cout << "I am laughing: " << me.test(isLaughing) << '\n';

	*/


	/*
	bitset<4> x{ 0b1100 };

	cout << x << '\n';
	cout << (x >> 1) << '\n'; // shift right by 1, yielding 0110
	cout << (x << 1) << '\n'; // shift left by 1, yielding 1000
	*/


	
	constexpr std::uint8_t mask0{ 0x01 }; // hex for 0000 0001
	constexpr std::uint8_t mask1{ 0x02 }; // hex for 0000 0010
	constexpr std::uint8_t mask2{ 0x04 }; // hex for 0000 0100
	constexpr std::uint8_t mask3{ 0x08 }; // hex for 0000 1000
	constexpr std::uint8_t mask4{ 0x10 }; // hex for 0001 0000
	constexpr std::uint8_t mask5{ 0x20 }; // hex for 0010 0000
	constexpr std::uint8_t mask6{ 0x40 }; // hex for 0100 0000
	constexpr std::uint8_t mask7{ 0x80 }; 



	constexpr std::uint8_t mask0{ 1 << 0 }; // 0000 0001
	constexpr std::uint8_t mask1{ 1 << 1 }; // 0000 0010
	constexpr std::uint8_t mask2{ 1 << 2 }; // 0000 0100
	constexpr std::uint8_t mask3{ 1 << 3 }; // 0000 1000
	constexpr std::uint8_t mask4{ 1 << 4 }; // 0001 0000
	constexpr std::uint8_t mask5{ 1 << 5 }; // 0010 0000
	constexpr std::uint8_t mask6{ 1 << 6 }; // 0100 0000
	constexpr std::uint8_t mask7{ 1 << 7 }; // 1000 0000

	constexpr std::uint8_t mask0{ 0b0000'0001 }; // represents bit 0
	constexpr std::uint8_t mask1{ 0b0000'0010 }; // represents bit 1
	constexpr std::uint8_t mask2{ 0b0000'0100 }; // represents bit 2
    constexpr std::uint8_t mask3{ 0b0000'1000 }; // represents bit 3
	constexpr std::uint8_t mask4{ 0b0001'0000 }; // represents bit 4
    constexpr std::uint8_t mask5{ 0b0010'0000 }; // represents bit 5
	constexpr std::uint8_t mask6{ 0b0100'0000 }; // represents bit 6
	constexpr std::uint8_t mask7{ 0b1000'0000 }; // represents bit 7

	std::uint8_t flags{ 0b0000'0101 }; // 8 bits in size means room for 8 flags

	std::cout << "bit 0 is " << (static_cast<bool>(flags & mask0) ? "on\n" : "off\n");
	std::cout << "bit 1 is " << (static_cast<bool>(flags & mask1) ? "on\n" : "off\n");


	return 0;
}