#include "stdafx.h"
#include<iostream>
#include<sstream>
#include<vector>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
	int A,B,C,D,E,i;      //宣告重複組合變數
	int x=1,o=1;		//設定累加值為一
	int E2,y1;			
	int sum1,sum2=0;
	
	vector<int> vecSeq;			//把每個輸入的字串送入
	string strInput;			//把strInput 宣告為字串型態
	getline(cin, strInput);		//使用getline函數，達成輸入多個數字的要求，再送至strInput
	int  nNumber;				
	stringstream ss(strInput);	
	while (ss >> nNumber ){			//從ss裡讀到nNumber數值裡
		vecSeq.push_back(nNumber);	//把讀到數值送到vecSeq陣列
	}
	
	for(i=1; i<(int)vecSeq.size(); i++){
		sum1=vecSeq[i];					
		sum2=sum2+sum1;			//取黑色格子的總數
		x++;
		o++;
	}
		
	x=x-2;
	E=vecSeq[0];		
	E2=E-sum2-x;		//全部格子總數-黑色格子-空格數

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
	D=C/y1;		//總共有幾種分法總數

	cout<< D <<endl ;
	
}	
