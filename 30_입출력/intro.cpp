/*
01 C++ 스타일의 입출력

cout과 cin 객체 다시 보기
C++스타일의 입출력이란 cin,cout 객체를 사용한 입출력을 말한다.

입출력의 구현
iostream헤더 파일에 보면 cout과 cin 객체를 선언하고 있다. extern이 붙어있어 실제 객체 정의는 어딘가 구현파일이 있을것이다.
extern ostream cout;
extern istream cin;
ostream과 istream 클래스는 템플릿 클래스를 재정의한 타입이다.
typedef basic_ostream<char> ostream;
typedef basic_istream<char> istream;
실제 객체는 basic_ostream과 basic_istream.
C++에서 스트림은 연결된 통로로 흘러가고 있는 데이터를 연상할 수 있다.
스트림의 왼쪽에서 데이터를 넣으면, 스트림의 오른쪽에 있는 내 프로그램에서 데이터를 꺼내서 사용한다.
결국 스트림의 양끝에서 데이터를 주고 받는 객체가 서로에 대해서 모르는 상태에서 데이터를 주고 받을 수 있다.
즉, 스트림을 통해서 서로간의 연관성(Coupling)이 없어지는 것이다.
cout,cin객체의 경우에는 스트림의 끝을 콘솔창과 연결해놓았다고 생각하면 된다.
구조로는 제일 아래쪽에 basic_istream과 basic_ostream클래스가 있고, 이 두 클래스 모두 basic_ios클래스를 상속받는다.
basic_ios는 입출력 스트림 클래스들에게 공통적으로 사용하는 기본 기능을 구현하고 있다.
또한 스트림 내부적으로 사용하는 메모리를 관리하기 위한 basic_streambuf클래스도 있다.
그리고 그 위에는 ios_base라는 최상위 클래스가 있는데, 출력을 이쁘게 만들 수 있는 여러가지 옵션을 구현하고 있다.

<<,>>연산자의 오버로딩
<<,>>연산자를 통해 cout,cin객체에 데이터를 보내거나 받아오는 작업을 해왔다.
basic_ostream, basic_istream 클래스가 <<,>> 연산자를 오버로딩하기에 가능한 일이다.
C++에서 제공하는 기본적인 타입들은 이미 오버로딩이 되있기 때문에 그냥 사용할 수 있다.
직접 만든 구조체나 클래스의 객체를 cout, cin 객체와 함께 사용하고 싶다면 <<, >> 연산자를 스스로 오버로딩하면 된다.

버퍼링과 방출
스트림을 사용할 때 바로 출력되는 것이 아니라 받은 자료를 모아두었다가 적당한 양이 쌓이면 한번에 콘솔이나 파일로 출력된다.
매번 보내는 것보다 한 번에 모아서 보내느 것이 보다 효율적이기 때문. 파일에 자료를 출력하는 경우에는 더욱 그렇다.
입력의 경우에도 마찬가지다.
이렇게 데이터를 모았다가 보내는 작업을 버퍼링(Buffering)이라고 부른다.
일반적으로 자료가 어느 한 곳에서 다른 곳으로 이동할 때 잠시 보관되는 메모리를 버퍼라고 부르고,
버퍼를 사용해서 모았다가 한 번에 보내는 일을 버퍼링이라고 한다.
출력한 내용을 곧바로 다른 작업에 사용해야 한다면 빨리 출력할 필요가 있다. 이럴 때는 버퍼에 있는 내용을
지금 당장 방출(Flushing)하라는 명령을 내릴 수 있다.
cout << "Hello, World~\n" << flush; //문자열을 버퍼로 보낸 후에 버퍼의 내용을 그 즉시 출력하게 만든다.
cout << "Hello, World~" << endl; //개행문자(\n)를 출력한 후에 버퍼의 내용을 방출하게 만든다.
두 줄의 코드는 동일한 일을 하고 있다. 
일반적으로 방출 명령을 사용할 일은 거의 없다.
내부적으로 버퍼링을 수행하고 있다는 것을 기억해야 한다.
출력한 문자가 바로 출력되지 않는 문제를 만나게 되면 버퍼링을 의심해볼 수 있다.

입출력 형식 지정하기
한마디로 출력을 예쁘게 꾸미는 것. 정렬이나 16진수, 소수점 제한 등의 작업.

setf() 함수 사용하기
입출력 형식을 지정하는 가장 기본적인 방법은 ios_base클래스의 setf()함수를 사용하는 것.
fmtflags setf(fmtflags f);
fmtflags setf(fmtflags f, fmtflags mask);
오버로드된 두 가지 버전.
만약 bool의 값을 0,1 이 아닌 true, false로 출력하고 싶으면
cout.setf(ios_base::boolalpha);
cout << true << endl; //1이 아닌 true가 출력된다.
setf()함수의 인자로 넣을 수 있는 값들은 ios_base클래스 안에서 정의하기 때문에 영역을 지정해 주어야 한다.

인자가 하나인  showbase:진법을 나타내는 기호(0x,0)를 함께 출력한다. 예로 0x2c
setf()함수에  showpoint:실수를 출력할 때 항상 소수점을 출력한다.
사용할 수     showpos:양수의 경우에도 +기호를 붙여서 출력한다.
있는 값       uppercase:실수를 scientific으로 출력할 때 'E'나 정수를 16진수로 출력할 때 사용하는 영문자들을 대문자로 출력.
              boolalpha:bool타입의 값을 1,0이 아닌 true, false로 출력하거나 입력받는다.
인자가 두 개인 dec:정수를 10진수로 출력하거나 입력받는다.
함수의 첫번째  hex:정수를 16진수로 출력하거나 입력받는다.
인자로 사용할  oct:정수를 8진수로 출력하거나 입력 받는다.
수 있는 값     internal:값을 오른쪽으로 정렬해서 출력한다. 하지만 부호(+,-)나 진법을 나타내는 기호(0x,0)는 왼쪽으로 정렬.
              left:값을 왼쪽으로 정렬해서 출력한다.
			  right:값을 오른쪽으로 정렬해서 출력한다.
			  fixed:고정된 부동 소수점 표기법을 사용한다. E나 소수점이 안나오는 경우 소수점으로 나오게한다.
			  scientific:실수를 항상 1.23E+006 꼴로 출력한다.
인자가 두 개인 adjustfield:(internal|left|right)와 같은 값.
setf()함수의  basefield:(dec|hex|oct)와 같은 값이다.
두번쨰 인자로 floatfield:(fixed|scientific)과 같은 값이다.
사용할 수 
있는 값

첫번째 그룹에 나온 값들을 사용하고 싶다면 인자가 하나인 setf()함수를 사용하면 된다.
두번째 그룹에 나온 값들을 사용하고 싶다면 인자가 두개인 setf()함수를 사용해야 한다.
두번째 그룹이 첫번째 인자, 세번째 그룹이 두번째 인자.
cout.setf(ios_base::hex, ios_base::basefield);
cout << 123 << endl; //7B를 출력한다.
두번째 그룹에 속한 옵션들은 동시에 사용할 수 없는 것들이 존재한다.
그렇기 때문에 이 옵션들은 단순히 껐다 켰다 하는 것이 아니라 고르는 방식을 사용해야 한다.
만약에 잘못된 버전의 setf()함수를 사용하면 원하는 대로 동작하지 않을 수도 있다.
cout.setf(ios_base::hex); //원하는 결과를 출력하지 않는다.
첫번째 그룹에 속한 값들은 여러 개의 값을 동시에 지정하는 것도 가능하다.
cout.setf(ios_base::showpoint|ios_base::showpos);
cout << 123.0 << endl; //+123.000을 출력한다.

setf()함수를 사용해서 지정한 옵션을 다시 취소하는 방법
인자가 두 개 있는 setf()함수를 사용한 경우라면 setf()함수의 반환 값을 보관해두었다가 다시 되돌리는 방법.
30_1
//setf()의 반환 값을 보관한다.
ios_base::fmtflags old_flags;
old_flags = cout.setf(ios_base::scirentific, ios_base::floatfield);
cout << 12.34 << endl; //1.234000e+001을 출력한다.
//보관한 값으로 다시 세팅한다.
cout.setf(old_flags, ios_base::floatfield);
cout << 12.34 << endl; //12.34를 출력한다.
setf()함수는 바로 이전의 세팅 값을 반환하기 때문에 그 값을 보관해두었다가 다시 setf()함수를 호출하면 이전세팅으로 돌아감.
반면에 인자가 하나인 setf()함수를 사용했다면 unsetf()함수를 사용하면된다.
30_2
cout.setf(ios_base::showpos);
cout << 333 << endl; //+333을 출력한다.
cout.unsetf(ios_base::showpos);
cout << 333 << endl; //333을 출력한다.

비트 마스트(Bit mask)를 사용한 인자 전달
cout.setf(ios_base::showpoint|ios_base::showpos)처럼 비트 단위 OR연산을 사용할 수 있는 것은
각 옵션 값들이 고유한 비트 값을 가지고 있기 때문이다.
예를 들어 각 옵션 값들이 서로 다른 한 비트만 1의 값을 갖게 지정하는 것이다.
showpoint = 00000001(2)
showpos = 00000010(2)
uppercase = 00000100(2)
showpoint|showpos는 3의 값을 갖는다. 결국은 setf()함수에 정수 3을 전달하는 것.
함수에 전달하는 인자는 단순한 정수 값 하나지만, 함수 안에서는 비트를 분석함으로써 어떤 값들이 전달됐는지 확인할 수 있다.
예를 들어
fmtflags setf(fmtflags f) {
	if ((f & showpoint) != 0) {
	}
}
매개 변수 f안에서 showpoint에 해당하는 비트가 1로 세팅된 경우에만 이 연산의 결과가 0이 아닌 값을 가질수 있고,
showpoint가 포함되어 있는지 확인할 수 있다. 다른 모든 옵션 값들에 대해서도 이런 방식을 사용해서 인자를 검사.
하나의 정수 값 안에 여러 가지 다양한 옵션 값들을 실어서 넘겨주는 것이어서 많은 곳에서 사용되는 방법이다.

그 밖의 함수들
setf()함수 외에도 출력 형식을 지정하는 데 사용하는 함수가 몇 개 더 있다.
width()함수는 출력하는 값을 몇 칸에 걸쳐서 출력할지를 지정하는 역할을 한다.
cout.width(10);
cout << 333 << ", " << 334 << endl; //       333,444을 출력
width()함수의 특징은 딱 한번의 출력에 대해서만 효력이 있다. 그래서 첫번째 333만 10칸에 걸쳐서 출력하고 나머지 자기수대로.
precision()함수는 실수의 출력방식에 따라서 다른 의미를 갖는데 ios_base::fixed를 지정한 경우에는
소수점 이하 자리 수를 지정하는 용도로 사용할 수 있다.
cout.setf(ios_base::fixed);
cout.precision(2);
cout << 3.33333 << endl; //3.33처럼 출력한다.
fill()함수를 사용하면 빈칸을 채우는 문자를 지정할 수 있다.
기본적으로 공백문자(Space)가 채워지는데 다른 문자로 바꿀 수도 있다.
cout.fill('*');
cout.width(10);
cout << 333 << endl; //*******333을 출력한다.

width()함수와 setw()조종자
setw()조종자는 내부적으로 width()함수를 호출함으로써 자신의 역할을 수행한다.
그렇기 때문에 setw()가 동작하는 방식이 사실 width()함수가 동작하는 방식이다.

조종자
Manipulator는 setf()함수나 기타 함수들을 쉽게 호출하는 방법이다.
cout << hex << 333 << endl; //14d를 출력한다.
이전에는 hex옵션값을 사용하기 위해서 복잡하게 setf()를 호출했었지만 조종자를 사용하면 매우 간단하게 끝낼 수 있다.
조종자는 setf()함수의 옵션들과 이름이 비슷해 용도를 짐작할 수 있다.
boolalpha, showbase, showpoint, showpos, uppercase, noboolalpha, noshowbase, noshowpoint, noshowpos,
nouppercase, Dec, hex, oct, fixed, scientific, internal, left, right
no~로 시작하는 이름들은 취소하는 의미.
조종자들의 내부에서는 결국 setf()나 unsetf()함수를 호출한다고 생각할 수 있다.
iomanip헤더 파일에는 인자를 받을 수 있는 조종자를 몇 개 더 정의하고 있다.
width()함수를 호출하는 대신에 조종자를 사용할 수 있다. iomanip 헤더파일을 포함해야 한다.
cout << setw(10) << 333 << end; //       333을 출력한다.
여기 조종자들은 모두 인자가 있다.
setiosflags:setf()를 사용하는 것과 동일한 효과.
resetiosflags:setf()를 통해서 지정한 옵션을 제거하는 효과.
setfill:fill()을 호출한 효과.
setprecision:precision()을 호출한 효과.
setw:width()를 호출한 효과
setbase:8,10,16중에 값을 넣어 출력하는 진법을 바꾸는 효과.
cout << setiosflags(ios_base::scientific) << 12.34 << endl; //1.234000e+001
cout << resetiosflags(ios_base::scientific) << 12.34 << endl; //12.34

그 밖의 입출력 기능들
스트림은 내부적인 상태를 갖고, 그 상태에 따라서 다르게 행동한다.

스트림의 상태
basic_ios클래스에는 스트림의 상태를 확인할 수 있는 4개의 멤버 함수가 있다. 각 함수는 bool을 반환한다.
bool good() const; //true면, 정상적인 상태
bool eof() const; //true면, 파일이나 입력의 끝에 도달
bool fail() const; //true면, 예상치 못한 입력이 들어오는 등의 문제 발생
bool bad() const; //true면, 잘못된 파일 등의 문제 발생
예를 들어 cin객체의 상태가 정상인지 알아보려면
if (cin.good()) {
	//정상상태
}
이 함수들은 특히 cin객체를 사용해서 정수를 입력 받을 때 유용하게 사용할 수 있다.
정수를 입력 받으려고 하는데 사용자가 문자열을 입력하면 cin객체가 실패상태로 변하고 더이상 사용불가.
그렇기 때문에 cin객체의 상태를 검사하고 다시 정상적인 상태로 되돌리는 작업이 필요.
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');
clear()함수는 cin객체의 내부적인 상태를 다시 정상으로 돌리는 역할을 한다.
이 함수만 호출해도 cin.good()함수는 true를 반환하지만 cin객체의 버퍼에는 아직도 잘못된 데이터가 남아있다.
ignore()함수를 사용해서 버퍼에 남은 데이터를 모두 무시해버릴 필요가 있다.
basic_isteram& ignore(streamsize _Count, int_type _Delim);
_Count는 버퍼에서 무시하려는 데이터의 바이트 수를 의미한다.
streamsize는 정수 타입을 재정의한 타입이다.
_Delim는 문자를 하나 넘겨주면 되는데, 이 문자를 만날 때까지만 데이터를 무시하게 된다.
예를 들어 _Count에 10을, _Delim에 '\n'을 넣어주면
데이터 중에 '\n'을 만나거나 10바이트가 될 때까지 무시하라는 뜻이 된다.
numeric_limits<steramsize>::max()는 streamsize가 가질 수 있는 최대 값을 반환한다.
결국 스트림에 있는 모든 데이터를 지우라는 뜻.

numeric_limits<streamsize>::max()
템플릿 클래스에 인자로 streamsize를 넘겨준다. max()는 클래스의 정적 멤버 함수이다.

문자열의 입력
cin객체를 사용해서 문자열을 받을 때는 메모리 공간을 미리 확보두어야 하는 문제가 있다.
사용자가 입력할 문자열의 길이를 예측하는 것은 불가능하기 때문이다.
그래서 동적 할당을 사용하거나 정적으로 할당하되 입력 받을 문자열의 길이를 제한하는 방법을 사용해야 한다.

파일 입출력
ofstream과 ifstream
typedef basic_ofstream<char> ofstream
typedef basic_ifstream<char> ifstream
이 클래스들은 basic_ostream과 basic_istream의 자식 클래스가 된다.
class basic_ofstream : public basic_ostream
class basic_ifstream : public basic_istream

파일 열기 옵션 지정하기
ofstream file1("test1.txt");
----------------------------
ofstream file2;
file2.open("test2.txt");
생성자나 open()멤버 함수를 사용할 수 있는데 파일 이름만 제공하면 출력 혹은 입력용으로 파일을 생성한다.
여기에 보다 구체적인 옵션을 제시할 수 있다.
app:파일의 끝에 자료를 추가하기 위한 용도로 연다.
ate:파일을 열고 파일의 끝으로 이동한다.
binary:텍스트가 아닌 바이너리로 입출력을 한다.
in:파일에서 값을 읽기 위한 용도로 연다.
out:파일에 값을 쓰기 위한 용도로 연다.
trun:기존 파일이 있다면 지워버리고 새 파일을 연다.
별다른 옵션이 없다면 디폴트로
ofstream file("test.txt", ios_base::out | ios_base::trunc);
그렇기 때문에 매번 기존 파일이 삭제되면서 새 파일이 열렸던 것이다.
기존 파일의 끝에 이어서 쓰고 싶다면
ofstream file("test.txt", ios_base::out | ios_base::app);
file << "Test Data" << endl;
프로그램을 여러 번 실행하게 되면 실행시킨 수 만큼 문자열이 존재할 것이다.
파일을 연 다음에는 파일이 잘 열린 상태인 확인할 필요가 있다.
지정한 파일이 존재하지 않거나, 파일에 문제가 있다면 실패할 수 있기 때문이다.
is_open()함수를 사용해서 확인할 수 있다.
ofstream file("test.txt");
if (false == file.is_open()) {
	//파일을 여는데 실패
}
파일을 다 사용한 후에는 close()함수를 호출해서 파일을 닫아줄 필요가 있다.
file.close();
하지만 ofstream, ifstream클래스의 소멸자에서 자동적으로 close()함수를 호출하기 때문에 굳이 호출할 필요는 없다.
물론 객체가 소멸되기 전에 함수를 빨리 닫을 필요가 있다면 직접 호출해주는 것이 좋다.

02 C 스타일의 입출력
C스타일의 입출력을 왜 배워야 할까
여전히 많은 C++개발자들이 C스타일의 입출력을 사용하고 있기 때문.

형식을 지정하는 입출력
printf()와 scanf()는 입출력 형식을 지정하는 동시에 입출력을 수행하는 함수다.

scanf()의 경우에는 인자로 주소 값을 넘겨야 한다.
scanf()는 값을 읽어오기 위한 함수기 때문에 입력 값을 보관할 변수의 주소를 넘겨주어야 한다.
scanf()가 만들어질 당시에는 레퍼런스가 없었으므로 포인터를 사용하는 것이다.

형식 지정
printf()는 출력에, scanf()는 입력에 사용하는 함수인데 <cstdio>헤더파일을 포함해야 한다.
30_3.cpp
기본적인 메커니즘은 %d, %f처럼 특수한 문자가 위치하는 곳에 변수의 값을 출력하거나, 입력받는 것이다.
%d는 정수를, %f는 실수를 의미하는 특수 문자다.
특수 문자들은 출력할 값의 타입뿐만 아니라 출력 형식까지도 결정하는 역할을 한다.
c:매칭하는 인자를 문자로 출력한다. (character)
d:매칭하는 인자를 10진수로 출력한다. (decimal)
o:매칭하는 인자를 8진수로 출력한다. (octal)
u:매칭하는 인자를 부호 없는 정수로 출력한다. (unsigned)
x:매칭하는 인자를 16진수로 출력한다. 7abc(hexadecimal)
X:매칭하는 인자를 16진수로 출력한다. 7ABC(hexadecimal)
e:매칭하는 인자(실수)를 1.23e+6처럼 출력한다. (exponential)
E:매칭하는 인자(실수)를 1.23E+6처럼 출력한다. (exponential)
f:매칭하는 인자(실수)를 123.56처럼 출력한다. (floating)
s:매칭하는 인자(문자열의 주소)를 문자열로 출력한다. (string)
30_4
printf("%d ", 65); //65
printf("%o ", 65); //101
printf("%X ", 65); //41
printf("%c ", 65); //A
printf("%f ", 12.34); //0.000000
printf("%e ", 12.34); //1.234000e+001
printf("%s 미디어 ", "한빛"); //한빛미디어
특수문자에 부가적인 옵션을 지정함으로써 보다 세세한 형식을 지정할 수도 있다.
%d와 특수문자 사이에 숫자를 적어주면 cout.width()를 호출한 것과 비슷한 효과.
printf("%10d", 333); //       333출력
앞쪽의 빈칸을 0으로 채우고 싶다면
printf("%010d", 333); //0000000333출력
양수인 경우에도 +기호를 출력하고 싶으면
printf("%+10d", 333); //      +333출력
왼쪽에 정렬하고 싶으면
printf("%-10d", 333); //333       출력
실수의 경우ㅜ에는 소수점 이하 자리수를 제한하기 위해서는 
printf("%.2f", 12.345678); //12.35출력(C++스타일과 마찬가지로 소수점 이하 자리가 반올림된다.)

특수문자와 실제 인자의 타입이 맞지 않는 경우
printf("%c", 12.34);
인자로는 double타입인데 %c를 사용하고 있다. 최악의 경우에는 프로그램이 비정상 종료하는 상황.
중요한 것은 컴파일러가 아무런 오류 메시지를 출력하지 않는다는 점이다.
그렇기 때문에 printf()나 scanf()함수를 사용할 때는 주의할 필요가 있다.

*/