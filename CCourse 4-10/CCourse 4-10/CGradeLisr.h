#include "stdafx.h"
#include<iostream>
#include<math.h>
#include<time.h>
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

void CGradeList::DisplayGrades()
{
	//�T�ӥ\��
	int i;
	for(i=0;i<n;i++)
	{
		cout <<"��"<<i+1<<"�����Z:"<< G[i]<<endl;
	}
	sta=0;
	aveg= S/n;

	for(int b=0;b<n;b++)
	{	
		sta+=powf(G[b]-aveg,2);
	}	
	
		sta=sqrtf(sta/n);
	cout << endl << "�`�@�� " <<  n << "�����" << endl; 
	cout << "������: "<< aveg << endl;
	cout << "�зǮt: "<< sta << endl;
}


CGradeList::~CGradeList()
{
	delete []G;
}

	
CGradeList::CGradeList()
{
	
	cout << "�п�J�A�n�p��N�Ӧ��Z: >> " ;
	cin >> n;
	int b;
	S=0;
	G= new int [n];  //�ʺA�t�m�O����
	for(b=0; b<n;b++)
	{	
		srand(time(NULL)+b);
		G[b]=rand()%101;
		S=S+G[b];
	}
	
	
}
	



