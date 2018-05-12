#include<Windows.h>
#include"HienThi.h"
#include"Console.h"

void inMenu(){
	TextColor (10);
	cout<<" _____________________________________________________\n<_________________GAME BAU CUA TOM CA_________________>\n\n";			//cau hinh menu
	TextColor (14);
	cout<<"            O"<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<"> MENU <"<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<"O\n                "<<char(176)<<"                     "<<char(176)<<"\n                "<<char(176)<<"   1-BAT DAU CHOI    "<<char(176)<<"\n                "<<char(176)<<"   2-HUONG DAN CHOI  "<<char(176)<<"\n                "<<char(176)<<"   3-THOAT           "<<char(176)<<"\n                "<<char(176)<<"                     "<<char(176)<<"\n            O"<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<"O\n";
	TextColor (10);
	cout<<" _____________________________________________________\n<_____________________________________________________>\n";
}

void inHuongDan(){
	clrscr();
	cout<<"\n ___________________";
	TextColor (10);
	cout<<"HUONG DAN CHOI TRO CHOI BAU CUA TOM CA";
	TextColor (11);
	cout<<"__________________";
	cout<<"\n\\  /                                                                     \\  /\n "<<char(176)<<char(176)<<"    Voi cach choi tuong tu game xoc dia, nguoi choi chon 1 trong 6     "<<char(176)<<char(176)<<"\n "<<char(176)<<char(176)<<"    linh vat may man la bau,cua,tom, ca,ga,nai,sau do lan luot dat     "<<char(176)<<char(176)<<"\n "<<char(176)<<char(176)<<"    cuoc voi nhieu muc cuoc khac nhau. Linh vat nao co mot trong 1     "<<char(176)<<char(176)<<"\n "<<char(176)<<char(176)<<"    trong 3 ket qua ma nha cai dua ra thi nguoi choi se duoc cong      "<<char(176)<<char(176)<<"\n "<<char(176)<<char(176)<<"    tien cuoc,nguoc lai ban se bi tru so tien da cuoc vao linh vat     "<<char(176)<<char(176)<<"\n "<<char(176)<<char(176)<<"    do.Ban cung se duoc nhan 10coin khi bat dau tham gia tro choi      "<<char(176)<<char(176)<<"\n/__\\_____________________________________________________________________/__\\\n\n\n";
	TextColor (12);
	cout<<"Nhan phim bat ki de quay lai menu";
}

void chuyenTenBien(int linhVat){
	if(linhVat==1)	cout<<"\n + So tien ban dat cuoc vao tom la: ";
	if(linhVat==2)	cout<<"\n + So tien ban dat cuoc vao cua la: ";				//loi dan dat cuoc cho cac linh vat tom,cua,ca,bau,nai,ga
	if(linhVat==3)	cout<<"\n + So tien ban dat cuoc vao ca la: ";
	if(linhVat==4)	cout<<"\n + So tien ban dat cuoc vao bau la: ";
	if(linhVat==5)	cout<<"\n + So tien ban dat cuoc vao nai la: ";
	if(linhVat==6)	cout<<"\n + So tien ban dat cuoc vao ga la: ";
}
void chuyenTenketQua(int &con1,int &con2,int &con3){
	cout<<"\n_____________________________________\n";
		TextColor (12);
	cout<<"Ket qua:";

	if(con1==1)	cout<<"tom ";								//dua cac so vua gieo duoc ngau nhien ve dang ten goi pho bien:bau,cua,tom,ca,nai,ga
	if(con2==1)	cout<<"tom ";
	if(con3==1)	cout<<"tom ";
	if(con1==2)	cout<<"cua ";
	if(con2==2)	cout<<"cua ";
	if(con3==2)	cout<<"cua ";
	if(con1==3)	cout<<"ca ";
	if(con2==3)	cout<<"ca ";
	if(con3==3)	cout<<"ca ";
	if(con1==4)	cout<<"bau ";
	if(con2==4)	cout<<"bau ";
	if(con3==4)	cout<<"bau ";
	if(con1==5)	cout<<"nai ";
	if(con2==5)	cout<<"nai ";
	if(con3==5)	cout<<"nai ";
	if(con1==6)	cout<<"ga ";
	if(con2==6)	cout<<"ga ";
	if(con3==6)	cout<<"ga ";
	cout<<"\n";
}

void inDiemHientai(int &tien){
	TextColor (12);
	cout<<"\n      ___________________\n     /                   \\\n    "<<char(179)<<"   Ban dang co "<<tien<<"$   "<<char(179)<<"\n     \\___________________/\n";
}

void inKetQua(int &tien){
	if(tien>0){
		cout<<"\n    Congratulations !!!\n           _____\n        \\ [_$.$_] /\n            |_|";
	}
	else
	{
		cout<<"\n    Game over!!!\n                  _____\n           [~>_<~]\n             /|_|\\";
	}
}
