#include "stdafx.h"
#include<iostream>
#include<sstream>
#include<vector>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
	int A,B,C,D,E,i;      //�ŧi���ƲզX�ܼ�
	int x=1,o=1;		//�]�w�֥[�Ȭ��@
	int E2,y1;			
	int sum1,sum2=0;
	
	vector<int> vecSeq;			//��C�ӿ�J���r��e�J
	string strInput;			//��strInput �ŧi���r�ꫬ�A
	getline(cin, strInput);		//�ϥ�getline��ơA�F����J�h�ӼƦr���n�D�A�A�e��strInput
	int  nNumber;				
	stringstream ss(strInput);	
	while (ss >> nNumber ){			//�qss��Ū��nNumber�ƭȸ�
		vecSeq.push_back(nNumber);	//��Ū��ƭȰe��vecSeq�}�C
	}
	
	for(i=1; i<(int)vecSeq.size(); i++){
		sum1=vecSeq[i];					
		sum2=sum2+sum1;			//���¦��l���`��
		x++;
		o++;
	}
		
	x=x-2;
	E=vecSeq[0];		
	E2=E-sum2-x;		//������l�`��-�¦��l-�Ů��

	A=1;
	for(int i=1;i<=o;i++)	
	{	
		A=A*i;
	}
	
	B=1;
	for(int i=1;i<=o-E2;i++)
	{		
		B=B*i;
	}

	y1=1;
	for(int i=1;i<=E2;i++)
	{	
		y1=y1*i;
	}
	
	C=A/B;
	D=C/y1;		//�`�@���X�ؤ��k�`��

	cout<< D <<endl ;
	
}	
