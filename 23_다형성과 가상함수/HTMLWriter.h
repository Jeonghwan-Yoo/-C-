#ifndef HTMLWRITER_H
#define HTMLWRITER_H

//DocWriter클래스를 상속받기 위해서는 헤더파일을 포함시켜야 한다.
#include "DocWriter.h"

class HTMLWriter : public DocWriter { //상속하는 법. 거의대부분 public.
public:
	HTMLWriter();
	~HTMLWriter();
	//22_5 부모 클래스의 생성자 지정하기
	//인자가 있는 생성자를 호출. DocWriter클래스의 생성자로 전달.
	HTMLWriter(const string& fileName, const string& content);

	//텍스트를 파일로 저장시킨다.
	//23_6 가상함수로 만들기
	//이미 DocWriter클래스에서 가상함수로 만들었기 때문에 virtual안써도 자동이지만
	//자식 클래스에서도 virtual키워드를 붙여주는 것이 일반적.
	virtual void Write(); 

	//폰트를 지정한다.
	void SetFont(const string& fontName, int fontSize, const string& fontColor);

protected:
	string _fontName;
	int _fontSize;
	string _fontColor;
};

#endif