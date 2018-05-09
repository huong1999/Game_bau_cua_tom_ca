#include<iostream>
#include<cstdlib>
#include"NguoiChoi.h"

char luaChonChoi(){
	char Yes_No;
	cin>>Yes_No;					//lua chon choi tiep hoac thoat game
	return Yes_No;
}

char nhapNumberHuongDan(char numberHuongDan,char nhap){
	nhap=0;
		while(numberHuongDan=getch())
		{
			system("cls");
			inMenu();
			nhap==1;
			return nhap;
		}
}

int datcuoc(int &tien){
	int tiencuoc;

	do{
		cin>>tiencuoc;
		if(tiencuoc<0||tiencuoc>tien)
		cout<<"So tien ban vua cuoc lon hon so tien ban dang co\nMoi ban nhap lai : "<<endl;
	}while(tiencuoc<0||tiencuoc>tien);

	return tiencuoc;
}
