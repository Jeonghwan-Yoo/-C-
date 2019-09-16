#include <iostream>

int main() {
	short s1 = 30000;
	short s2 = 30000;
	short s3 = s1 + s2;
	short s4 = s3 / 2;

	std::cout << "(30000 + 30000) / 2 = " << s4 << std::endl;

	return 0;
}