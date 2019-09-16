#include <iostream>
using namespace std;

void A();
void B();
void C();

int main() {
	try {
		A();
	}
	catch (int ex) {
		cout << "¿¹¿Ü = " << ex << "\n";
	}
	return 0;
}

void A() {
	B();
}

void B() {
	C();
}

void C() {
	throw 337;
}