#include "pch.h"
#include "Transport.h"


Transport::Transport()
{
}

Transport::Transport(string type, double FeesPerOne)
{
	_type = type;
	_FPO = FeesPerOne;
}

void Transport::show()
{
	cout << "Type : " << _type << "\t";
	cout << "fees per one : " << _FPO << "\t";
	cout << "fees per ten : " << _FPT << "\t";
	cout << "fees per a hundred : " << _FPH << "\t";
	cout << "fees per thousand : " << _FPTH << "\t";
	cout << "fees per ten thousand : " << _FPTTH << "\t";
	cout << "fees per a hundred thousand : " << _FPHTH << "\t";

}


Transport::~Transport()
{
}
