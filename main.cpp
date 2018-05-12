#include <iostream>
#include<conio.h>
#include<time.h>
#include<Windows.h>
#include"HienThi.h"
#include"NguoiChoi.h"
#include"KhoiTao.h"
#include"XuLy.h"
#include"Console.h"

using namespace std;

int main(){
	int con1,con2,con3;
	int bau,tom,cua,ca,nai,ga;
	int tien=10,tien1,tien2,tien3;
	char nhapSoMenu,numberHuongDan;	//bien nhap vao lua chon trong menu
	int dieuKienLap=1;	//dieu kien duoc gan de tiep tuc choi

	inMenu();

	TextColor (13);

	while(nhapSoMenu=getch()) {

		if(nhapSoMenu=='1')
		{
			while(dieuKienLap==1)
			{
				clrscr();	//xoa man hinh

				srand(time(NULL));					//sinh so ngau nhien cho xuc xac
				con1 = khoiTao();
				con2 = khoiTao();
				con3 = khoiTao();

				TextColor(12);
				do{

					cout<<" _________________________\n| Ban co "<<tien<<"$ de dat cuoc |\n|________________________|\n\n";
					TextColor(11);
					cout<<"Ban co 6 lua chon nhu sau: "<<endl;

					chuyenTenBien(1);	tom=datcuoc(tien);
					chuyenTenBien(2);	cua=datcuoc(tien);				//dua ra loi dan voi cac bien tom,cua,ca,bau,nai,ga & dat cuoc vao moi bien tung ung
					chuyenTenBien(3);	ca=datcuoc(tien);
					chuyenTenBien(4);	bau=datcuoc(tien);
					chuyenTenBien(5);	nai=datcuoc(tien);
					chuyenTenBien(6);	ga=datcuoc(tien);



					if(ga+tom+cua+ca+bau+nai>tien) {
						cout<<"\nTong cac so ban vua nhap lon hon so tien ban dang co, hay nhap lai";
						Sleep(2000);
						clrscr();

					}
				} while (ga+ca+tom+cua+bau+nai > tien);

				tien1=hamsosanh(con1,tom,cua,ca,bau,nai,ga);
				tien2=hamsosanh(con2,tom,cua,ca,bau,nai,ga);		//quy doi gia tri cua con1,con2,con3 lan luot sang tien1,tien2,tien3
				tien3=hamsosanh(con3,tom,cua,ca,bau,nai,ga);

				chuyenTenketQua(con1,con2,con3);				//in ra ket qua
				tinhtien(tien,tien1,tien2,tien3,tom,cua,ca,bau,nai,ga,con1,con2,con3);			//tinh so tien sau 1 van choi
				inKetQua(tien);			//thong bao so tien hien co va loi ket

				Sleep(3000);
				clrscr();

				inDiemHientai(tien);		//in so diem hien tai
				if(tien<1)		return 0;	//game over

				TextColor (14);
				cout<<"\n\n-->Ban co muon choi tiep khong?\n            (Y/N):";

				if(batDauChoi(luaChonChoi())==true)

					dieuKienLap=1;			//chuyen sang van tiep theo

				else
				{
					//dieuKienLap=0;		//thoat game
					return 0;
				}
			}
		}
		else if(nhapSoMenu=='2'){

			TextColor (11);

			inHuongDan();		//in huong dan ra man hinh

			nhapNumberHuongDan(numberHuongDan,nhapSoMenu);			//nhap so bat ki de tro ve menu

			clrscr();
			inMenu();	//in menu ra man hinh sau khi thoat muc huong dan tro choi
		}

		else if(nhapSoMenu=='3')	return 0;			//thoat game

		else	nhapSoMenu;			//nhap lai chinh xac so can chon tren menu
	}
	return 0;
}
