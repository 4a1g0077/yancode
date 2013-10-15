#include "stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	



	double a=0,b=1;
	

	double Xn,Vx,f,f1=0,f2=0,f3=0,f4=0,f5=0,t,n;
	cout<<"請輸入你要分割N塊:>>";
	 cin >> n;
	 Vx=(b-a)/n;
	

	for(int i=1; i<=n; i++){
		
		Xn=a+i*Vx;
		cout<<"每次的X"<<i<<"值:"<< Xn <<endl;
		t=pow(-Xn,2);
		
		f=exp(t);
		cout<<"每次的F(X"<<i<<")值:"<< f <<endl;
			//f=sin(Xn)/Xn;
		
			if(i==n){
				f1+=f;
			}
			else{
				f2+=2*f;
			}
		
			if((i%2==0)&&(i!=8))
				f4+=2*f;
			else if(i==n)
				f5+=f;
			else 
				f3+=4*f;
				

	

	}
		






		cout << "數值積分梯形法則:" <<(Vx/2.0)*(f1+f2) << endl;
		cout <<	"數值積分辛普森法則:" <<(Vx/3.0)*(f3+f4+f5) << endl;
			
	
		cout<<endl;
		cout<<endl;
		system("pause");
		return 0;
	


}

