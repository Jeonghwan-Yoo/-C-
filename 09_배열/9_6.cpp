#include <iostream>
using namespace std;

int main() {
	double d;
	int i;
	char a;

	//sizeof의 다양한 사용
	cout << "sizeof(d) = " << sizeof(d) << "(bytes)\n";
	cout << "sizeof(i) = " << sizeof(i) << "(bytes)\n";
	cout << "sizeof(a) = " << sizeof(a) << "(bytes)\n";
	cout << "sizeof(double) = " << sizeof(double) << "(bytes)\n";
	cout << "sizeof(int) = " << sizeof(int) << "(bytes)\n";
	cout << "sizeof(char) = " << sizeof(char) << "(bytes)\n";

	return 0;
}