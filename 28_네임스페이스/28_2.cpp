//멍멍이와 관련된 것들
namespace Dog {
	//멍멍이 한마리 정보
	struct Info {
		char name[20];
		int age;
	};

	Info dogs[20]; //멍멍이 리스트
	int count; //전체 멍멍이들의 수

	void CreateAll(); //모든 멍멍이 생성 함수
} //namespace끝에는 ;세미콜론이 붙지 않는다.

//양옹이와 관련된 것들
namespace Cat {
	//야옹이 한마리 정보
	class Info {
	public:
		void Meow();
	protected:
		char name[20];
	};

	Info cats[20]; //야옹이 리스트
	int count; //전체 야옹이들의 수

	void CreateAll(); //모든 야옹이 생성 함수
}
//두 개의 네임스페이스와 전역 공간에 걸쳐 count라는 이름의 변수를 세 개 정의했다.

//전체 멍멍이와 야옹이들의 수
int count;

int main() {
	//모든 야옹이를 생성한다.
	CreateAll(); //에러발생

	//야옹이 배열에 접근한다.
	cats[0].Meow(); //에러발생

	return 0;
}

namespace Dog {
	void CreateAll()
	{
		// 아무것도 하지 않는다. 예제니까.
	}
}

namespace Cat {
	void Info::Meow() {
		// 아무것도 하지 않는다. 예제니까.
	}

	void CreateAll() {
		// 아무것도 하지 않는다. 예제니까.
	}
}
