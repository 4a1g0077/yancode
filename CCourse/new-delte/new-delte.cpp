#include "stdafx.h"
#include<iostream>
#include<math.h>
#include<time.h>
#include<string>
using namespace std;



class CGradeList
{
public:
	 CGradeList();
	 ~CGradeList();
	 void  DisplayGrades();
private:
	int n;
	int *G;
	int S;
	float aveg,sta;

};
class CCourse
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
{
	cout<<"課程名稱:"<< strCourseName;
	cout<<"老師姓名:"<< strTeacherName;
}
void CGradeList::DisplayGrades()
{
	//三個功能
	int i;
	
	for(i=0;i<n;i++)
	{
		cout <<"第"<<i+1<<"筆成績:"<< G[i]<<endl;
	}
	sta=0;
	aveg= (float)S/(float)n;

	for(int b=0;b<n;b++)
	{	
		sta+=powf(G[b]-aveg,2);
	}	
	
		sta=sqrtf(sta/n);
	cout << endl << "總共有 " <<  n << "筆資料" << endl; 
	cout << "平均值: "<< aveg << endl;
	cout << "標準差: "<< sta << endl;
}


CGradeList::~CGradeList()
{
	delete []G;
}

	
CGradeList::CGradeList()
{
	
	cout << "請輸入你要計算N個成績: >> " ;
	cin >> n;
	int b;
	S=0;
	G= new int [n];  //動態配置記憶體
	for(b=0; b<n;b++)
	{	
		srand(time(NULL)+b);
		G[b]=rand()%101;
		S=S+G[b];
	}
	
	
}
	



int main()
{
	
	CGradeList y1;
	y1.DisplayGrades();
	return 0;
}


