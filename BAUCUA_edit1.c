#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;


void start();
void mid();
void check();
void paint_won(int cost);
void paint_gameover(int cost);
void tung_xuc_xac(int con1,int con2,int con3);


int main() {
	int dem=0,cost=10;
	int n[3],con1,con2,con3;
	int coin[3],coin_$[3],n_1[3];
	start();
	for(int i=1;i<=3;i++){
		mid();
	}
	tung_xuc_xac(con1,con2,con3);
	check(n[1],n[2],n[3],cost[1],cost[2],cost[3]);
	paint_won(cost);
	paint_gameover(cost);
	cout<<"\nTong so tien cua ban la: "<<cost<<"$";

}
void start() {
	cout<<"                                 XUC XAC\n\n______________________HUONG DAN CHOI TRO CHOI XUC XAC________________________\n\\                                                                           /\n|      Tro choi gom co 3 vien xuc xac va 3 lan dat cuoc o moi luat choi.   |\n|      Và ban cung se duoc nhan 10coin khi bat dau tham gia tro choi       |\n|      Bat dau choi,nguoi choi can nhap vào 3 so thu tu bat kì tu 1 den    |\n|      6(tuong ung voi các ten goi lan luot la bau,cua,tom,ca,nai,heo      |\n|      trong cach goi dan gian) va dong thoi lan luot dat cuoc so coin     |\n|      cho tung lan nhap.Sau khi nha cai lac xuc xac,neu 1 mat xuc xac     |\n|      nao do co cung gia tri voi so thu tu ma nguoi choi da chon,thi      |\n|      nguoi choi se nhan duoc 1 lân tiên tuong duong voiôô coin ban dat   |\n|      cuoc,neu khong nguoi choi se bi mat tien da dat cuoc.Tro choi ket   |\n/      thuc khi ban da choi xong 1 van ma chi con  0 coin.                  \\\n=============================================================================\n";
}
void mid(int n,int coin,int coin_$,int n_1,int con1,int con2,int con3,cost) {
	int i;
		cout<<"\nMoi ban chon 1 so bat ki trong khoang tu 1 den 6 cach nhau boi dau cach: ";
		cin>>n;
		while(n>6||n<1){
			cout<<"So vua nhap cua ban khong nam trong khoang quy dinh\nMoi ban chon lai : ";
			cin>>n_1;
			n=n_1;
		}
		cout<<"Moi ban nhap so coin dat cuoc: ";
		cin>>coin;
		while(coin>cost){
			cout<<"So coin ban vua nhap lon hon so coin ban dang co hoac nho hon 0 coin\nMoi ban nhap lai so tien cuoc: ";
			cin>>coin_$;
			coin=coin_$;
		}
}
void check(int n1,int n2,int n3,int cost,int cost1,int cost2,int cost3){
	if((n2!=con2&&n3!=con3&&n1==con1)||(n1!=con1&&n2!=con2&&n3==con3)||(n1!=con1&&n2!=con2&&n3==con3)){
				if(n2!=con2&&n3!=con3&&n1==con1)
				cost=cost+coin1-coin2-coin3;
				else if(n1!=con1&&n2!=con2&&n3==con3)
				cost=cost+coin3-coin1-coin2;
				else
				cost=cost+coin3-coin1-coin2;
			}
			else if((n1!=con1&&n2==con2&&n3==con3)||(n1==con1&&n2!=con2&&n3==con3)||(n1==con1&&n2==con2&&n3!=con3)){
				if(n1!=con1&&n2==con2&&n3==con3)
					cost=cost+coin2+coin3-coin1;
				else if(n1==con1&&n2!=con2&&n3==con3)
					cost=cost+coin1+coin3-coin2;
				else
					cost=cost+coin1+coin2-coin3;

			}
			else if(n1==con1&&n2==con2&&n3==con3){
					cost=cost+coin1+coin2+coin3;
		}
			else
				cost=cost-coin1-coin2-coin3;
			cout<<"\nSo tien hien tai cua ban la: "<<cost<<"$\n                            ---*--*--*---\n";
}
void paint_won(int cost){
	if(cost>4){
		cout<<"\nCongratulations !!!\n                                _____\n                             \\ [_$.$_] /\n                                 |_|";
	}
void paint_gameover(int cost){
	if(cost<5)
		cout<<"\nGame over!!!\n                                _____\n                               [~>_<~]\n                                /|_|\\";
	}
}
void tung_xuc_xac(int con1,int con2,int con3) {
	srand(time(NULL));
		con1=rand()%6+1;
		con2=rand()%6+1;
		con3=rand()%6+1;
		cout<<"\nxuc xac 1: "<<con1<<"\nxuc xac 2: "<<con2<<"\nxuc xac 3: "<<con3;
	}
}
