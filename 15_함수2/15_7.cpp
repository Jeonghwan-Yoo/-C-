#include <iostream>
using namespace std;

//ForWindows9x()나 ForWindowsNT()를 가리킬 수 있는 포인터 타입을 정의.
typedef void(*SYSTEM_FUNC)();

void ForWindows9x();
void ForWindowsNT();
bool IsWindows9x();
void ImportantFunc(SYSTEM_FUNC pfnSyst);

int main() {
	//함수의 포인터 변수를 정의한다.
	SYSTEM_FUNC pfn;

	//시스템의 버전에 따라서 알맞은 함수를 가리키게 만든다.
	//그럼 이제 더 이상 시스템의 버전을 검사할 일이 없어진다.
	//필요할 때마다 포인터를 통해 함수를 호출하면 된다.
	if (IsWindows9x())
		pfn = &ForWindows9x;
	else
		pfn = &ForWindowsNT;

	//아주 중요한 함수를 호출한다.
	//함수의 포인터를 인자로 넘겨준다.
	//"함수 주소 줄테니까 필요하면 호출해"
	ImportantFunc(pfn);
	return 0;
}

//Windows 95/98/Me용 함수
void ForWindows9x() {
	cout << "Windows 9x용 함수가 호출됨\n";
}

//Windows NT/2000/XP용 함수
void ForWindowsNT() {
	cout << "Windows NT/2000/XP용 함수가 호출됨\n";
}

//현재 실행되는 환경을 Windows 9x인지 반환하는 함수
bool IsWindows9x() {
	//임의로 false를 반환하게 했다.
	return false;
}

//바로 그, 아주 중요한 함수
void ImportantFunc(SYSTEM_FUNC pfnSyst) {
	//버전에 맞는 함수를 호출한다.
	(*pfnSyst)(); //기존 시스템 버전을 검사하던 코드는 사라졌다. 이미 호출할 함수를 가리킴.

	//다시 한번 버전에 맞는 함수르 호출한다.
	(*pfnSyst)();
}