#include "stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	



	double a=0,b=1;
	

	double Xn,Vx,f,f1=0,f2=0,f3=0,f4=0,f5=0,t,n;
	cout<<"�п�J�A�n����N��:>>";
	 cin >> n;
	 Vx=(b-a)/n;
	

	for(int i=1; i<=n; i++){
		
		Xn=a+i*Vx;
		cout<<"�C����X"<<i<<"��:"<< Xn <<endl;
		t=pow(-Xn,2);
		
		f=exp(t);
		cout<<"�C����F(X"<<i<<")��:"<< f <<endl;
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
		






		cout << "�ƭȿn����Ϊk�h:" <<(Vx/2.0)*(f1+f2) << endl;
		cout <<	"�ƭȿn�������˪k�h:" <<(Vx/3.0)*(f3+f4+f5) << endl;
			
	
		cout<<endl;
		cout<<endl;
		system("pause");
		return 0;
	


}

