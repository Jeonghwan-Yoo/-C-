#ifndef CAT_H
#define CAT_H

// 야용이와 관련된 것들
namespace Cat
{
	// 야옹이 한 마리 정보
	class Info
	{
	public:
		void Meow();
	protected:
		char name[20];
	};

	extern Info cats[20];	// 야옹이 리스트
	extern int count;		// 전체 야옹이 들의 수

	void CreateAll();	// 모든 야옹이 생성 함수
}

#endif