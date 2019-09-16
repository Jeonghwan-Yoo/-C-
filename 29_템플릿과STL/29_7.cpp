#include <algorithm> //sort()
#include <vector> //vector클래스
#include <iostream>

int main() {
	//동적 배열을 생성해서 임의의 영문자를 추가한다.
	std::vector<char> vec; //char타입의 값을 보관할 수 있는 vector객체 생성.
	vec.push_back('e'); //list와 사용법이 동일
	vec.push_back('b');
	vec.push_back('a');
	vec.push_back('d');
	vec.push_back('c');

	//sort()함수를 사용해서 정렬한다.
	std::sort(vec.begin(), vec.end()); //첫번째 원소와 마지막 원소의 위치를 인자로 넘겨줌.

	//정렬 후 상태를 출력한다.
	//list 사용법과 동일
	std::cout << "vector 정렬 후\n";
	std::vector<char>::iterator it;
	for (it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it;

	//이번에는 배열을 정리해보자.
	//임의의 문자열을 넣은 배열을 만든다.
	char arr[5] = { 'd','c','b','a','e' };

	//sort()함수를 사용해서 정렬한다.
	std::sort(arr, arr + 5); //평범한 배열까지도 정렬할 수 있다.

	//정렬 후 상태를 출력한다.
	//STL과 최대한 유사하게 작성해 본다.
	std::cout << "\n\n배열 정렬 후\n";
	for (char* p = arr; p != arr + 5;++p)
		std::cout << *p;

	std::cout << "\n";

	return 0;
}