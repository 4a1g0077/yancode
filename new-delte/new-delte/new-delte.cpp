#include "stdafx.h"
#include<iostream>
#include<math.h>
#include<time.h>
using namespace std;



class CGradeList
{
public:
	 CGradeList();
	 //~CGradeList();
	 //void show();
private:
	int n;
	int G[2000];
	float aveg;
};	

CGradeList::CGradeList()
{
	
	cout << "請輸入你要計算N個成績: >> " ;
	cin >> n;
	int b;
	int S=0;
	for(b=0; b<n;b++)
	{	
		srand(time(NULL)+b);
		G[b]=rand()%101;
		S=S+G[b];
	}
	
	
}
	


/*void CGradeList::show()
{
	int i;
	for(i=0;i<n;i++)
	{
		cout <<"第幾筆成績:"<< G[i]<<endl;
	}
}*/
	 


int main()
{
	CGradeList y1;
	//y1.show() ;
	return 0;
}



/*int main(){
	int n,b,c,S=0,aveg2;
	float aveg,sta=0;
	int G[2000];

	cout << "請輸入你要計算N個成績: >> " ;
	cin >> n;

	for(b=0; b<n;b++)
	{	
		srand(time(NULL)+b);
		G[b]=rand()%101;
		S=S+G[b];
	}

	aveg = S/n;

	for(b=0;b<n;b++)
	{	
		sta+=powf(G[b]-aveg,2);
	}	
	
		sta=sqrtf(sta/n);

	cout << endl << "總共有 " <<  n << "筆資料" << endl; 
	cout << "平均值: "<< aveg << endl;
	cout << "標準差: "<< sta << endl;
	return 0;
}
*/


