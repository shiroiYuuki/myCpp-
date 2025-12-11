#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void printBinary(unsigned short val, string nama){
	cout << nama << " = " << bitset<8>(val) << endl; 
}

int main(){

	unsigned short a = 6;
	unsigned short b = 10;
	unsigned short c;

	cout << "\n>> - Bitwise SHR" << endl; // satu ke kanan
	c = a >> 1; 
	printBinary(a,"a");
	printBinary(c,"c");
	cout << "c= " << c << endl;

	cout << "\n<< - Bitwise SHL" << endl; // satu ke kanan
	c = a << 1;
	printBinary(a,"a");
	printBinary(c,"c");
	cout << "c= " << c << endl;

	cout << "\n~ - Bitwise NOT" << endl; // yang bukan
	c = ~a;
	printBinary(a,"a");
	printBinary(c,"c");
	cout << "c= " << c << endl;

	cout << "\n^ - Bitwise XOR" << endl; // true hanya jika beda
	c = a ^ b;
	printBinary(a,"a");
	printBinary(b,"b");
	printBinary(c,"c");
	cout << "c= " << c << endl;

	cout << "\n| - Bitwise OR" << endl; // salah satu
	c = a | b;
	printBinary(a,"a");
	printBinary(b,"b");
	printBinary(c,"c");
	cout << "c= " << c << endl;

	cout << "\n& - Bitwise AND" << endl; // dan
	c = a & b;
	printBinary(a,"a");
	printBinary(b,"b");
	printBinary(c,"c");
	cout << "c= " << c << endl;

	
	system("pause");
	return 0;
}

// bitwise operator
// &	AND	Bitwise AND
// |	OR	Bitwise inclusive OR
// ^	XOR	Bitwise exclusive OR
// ~	NOT	
// <<	SHL	Shift bits left
// >>	SHR	Shift bits right


