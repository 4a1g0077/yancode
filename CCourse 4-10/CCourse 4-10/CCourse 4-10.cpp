#include "stdafx.h"
#include"CGradeLisr.h"
#include<iostream>
#include<string>
using namespace std;



class CCourse : public CGradeList
{
public:	
	CCourse();
	~CCourse();
	void Display();
	
	
	
private:
	string strCourseName;
	string strTeacherName;
};

CCourse::CCourse()
:CGradeList(),strTeacherName("CSIE Tutor")
	{	strCourseName=" c++ Pogramming";
	}

void CCourse::Display()
{
	cout << strCourseName <<endl;
	cout << strTeacherName <<endl;
	CGradeList::DisplayGrades();
}
CCourse::~CCourse()
{
	CGradeList::~CGradeList();
}

	
	



int main()
{
	CCourse y2;
	y2.Display();
	return 0;
}


