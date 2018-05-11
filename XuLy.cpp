#include"XuLy.h"

bool batDauChoi(char kitu)
{
	if(kitu=='Y'||kitu=='y')					//kiem tra Yes/No
		return true;
	else if(kitu=='N'||kitu=='n')
		return false;
}

int hamsosanh(int &xucxac,int tom,int cua,int ca,int bau,int nai,int ga)
{
	int tien;

	if	   (xucxac == 1) 		tien = tom;				//the gia tri dat cuoc cua cac linh vat ma xuc xac quay duoc
	else if(xucxac == 2) 		tien = cua;
	else if(xucxac == 3) 		tien = ca;
	else if(xucxac == 4) 		tien = bau;
	else if(xucxac == 5) 		tien = nai;
	else 			   			tien = ga;

	return tien;
}


int tinhtien(int &tien,int tien1,int tien2,int tien3,int tom,int cua,int ca,int bau,int nai,int ga,int con1,int con2,int con3)
{

	if(con1!=con2&&con2!=con3&&con1!=con3)

		tien = tien + (2*(tien1 + tien2 + tien3)) - (tom+cua+ca+bau+nai+ga);		//tong so tien khi khong co gia tri nao cua 1 trong 3 xuc xac trung nhau

	else if((con1==con2&&con1!=con3)||(con2==con3&&con1!=con2))

		tien=tien + (tien1 + tien2 + tien3) - (tom+cua+ca+bau+nai+ga-tien1-tien3);	//tong so tien khi chi co gia tri cua xuc xac 1 va 2 hoac xuc xac 2 va 3 trung nhau

	else if(con1==con3&&con1!=con2)

		tien=tien + (tien +tien2 +tien3) - (tom+cua+ca+bau+nai+ga-tien1-tien2);		//tong so tien khi chi co gia tri cua xuc xac 1 va 3 trung nhau

	else

		tien=tien + (tien +tien2 +tien3) - (tom+cua+ca+bau+nai+ga-tien1);			//tong so tien khi ca 3 xuc xac deu trung nhau


	TextColor (14);		//mau vang
	cout<<"\nTong ket:\n     Ban co "<<tien<<"$"<<endl;
	
	return tien;
}
