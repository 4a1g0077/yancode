#include "stdafx.h"
#include<iostream>
using namespace std;


class CBuyer
{
public:
	virtual  void Buy (void)
	{
		cout << "買東西" << endl;
	}

};



class CBuyerApple : public CBuyer
{
public:
	  void Buy (void)
	{
		cout << "買蘋果" << endl;
	}



	void Price (void)
	{
		cout << "蘋果: NT $ 50.-" << endl;
	}
};


class CBuyerPear : public CBuyer
{
public:
	void Buy (void)
	{
		cout<< "買梨子" <<endl;
	}

	void Price (void)
	{
		cout << "梨子: NT $ 30. -" << endl;
	}
};




void DoBusiness (CBuyer* pBuyerBase)
{
	cout << "Test Virtual Function" << endl;
	pBuyerBase->Buy();
	

	if( dynamic_cast<CBuyerApple*>(pBuyerBase) ) {
		CBuyerApple* pBuyApple =
			dynamic_cast<CBuyerApple*>(pBuyerBase);
		pBuyApple->Price();
	} else if(dynamic_cast<CBuyerPear*>(pBuyerBase) ){
		CBuyerPear* pBuyPear =
			dynamic_cast<CBuyerPear*>(pBuyerBase);
		pBuyPear->Price();
}


	cout << endl;
}

void Test (void)
{
	CBuyer  BuyerBase;
	CBuyerApple BuyerA;
	CBuyerPear  BuyerP;

	BuyerBase.Buy();
	BuyerA.Buy();
	BuyerP.Buy();
	cout << endl;

	DoBusiness(&BuyerBase);
	DoBusiness(&BuyerA);
	DoBusiness(&BuyerP);
}

int _tmain(int argc, _TCHAR* argv[])

{
	Test();
	return 0;
}

