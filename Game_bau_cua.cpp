#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main() {
	cout<<"                                 XUC XAC\n\n";
	cout<<"______________________HUONG DAN CHOI TRO CHOI XUC XAC________________________\n\\";
	cout<<"                                                                           /\n";
	cout<<"|      Tro choi gom co 3 vien xuc xac va 3 lan dat cuoc o moi luat choi.   |\n|      Và ban cung se duoc nhan 10coin khi bat dau tham gia tro choi       |\n|      Bat dau choi,nguoi choi can nhap vào 3 so thu tu bat kì tu 1 den    |\n|      6(tuong ung voi các ten goi lan luot la bau,cua,tom,ca,nai,heo      |\n|      trong cach goi dan gian) va dong thoi lan luot dat cuoc so coin     |\n|      cho tung lan nhap.Sau khi nha cai lac xuc xac,neu 1 mat xuc xac     |\n|      nao do co cung gia tri voi so thu tu ma nguoi choi da chon,thi      |\n|      nguoi choi se nhan duoc 1 lân tiên tuong duong voiôô coin ban dat   |\n|      cuoc,neu khong nguoi choi se bi mat tien da dat cuoc.Tro choi ket   |\n/      thuc khi ban da choi xong 1 van ma chi con  0 coin.                  \\\n=============================================================================\n";
	int solandoan=3;
	int dem=0,solandoansai=0,cost=10;
	int n1,n2,n3,con1,con2,con3;
	cout<<"\n                         -*-BAN CO 3 LAN DOAN-*-\n\n";
	cout<<"---------------------------------------------------------------------------\n";
	int i,coin1,coin2,coin3,coin_1,coin_2,coin_3,n_1,n_2,n_3;
	for(i=1;i<=solandoan;i++){
		cout<<"                            Lan du doan thu "<<i<<":\n";
		cout<<"\nMoi ban chon 1 so bat ki trong khoang tu 1 den 6 cach nhau boi dau cach: ";
		cin>>n1;
		while(n1>6||n1<1){
			cout<<"So vua nhap cua ban khong nam trong khoang quy dinh\nMoi ban chon lai : ";
			cin>>n_1;
			n1=n_1;
		}
		cout<<"Moi ban nhap so coin dat cuoc: ";
		cin>>coin1;
		while(coin1>cost){
			cout<<"So coin ban vua nhap lon hon so coin ban dang co hoac nho hon 0 coin\nMoi ban nhap lai so tien cuoc: ";
			cin>>coin_1;
			coin1=coin_1;
		}
		cout<<"\nMoi ban chon 1 so bat ki trong khoang tu 1 den 6 cach nhau boi dau cach: ";
		cin>>n2;
		while(n2>6||n2<1){
			cout<<"So vua nhap cua ban khong nam trong khoang quy dinh\nMoi ban chon lai : ";
			cin>>n_2;
			n2=n_2;
		}
		cout<<"Moi ban nhap so coin dat cuoc: ";
		cin>>coin2;
		while((coin2+coin1)>cost){
			cout<<"So coin ban vua nhap lon hon so coin ban dang co hoac nho hon 0 coin\nMoi ban nhap lai so tien cuoc: ";
			cin>>coin_2;
			coin2=coin_2;
		}
		cout<<"\nMoi ban chon 1 so bat ki trong khoang tu 1 den 6 cach nhau boi dau cach: ";
		cin>>n3;
		while(n3>6||n3<1){
			cout<<"So vua nhap cua ban khong nam trong khoang quy dinh\nMoi ban chon lai : ";
			cin>>n_3;
			n3=n_3;
		}
		cout<<"\nMoi ban nhap so coin dat cuoc: ";
		cin>>coin3;
		while((coin3+coin2+coin1)>cost){
			cout<<"So coin ban vua nhap lon hon so coin ban dang co hoac nho hon 0 coin\nMoi ban nhap lai so tien cuoc: ";
			cin>>coin_3;
			coin3=coin_3;
		}
		srand(time(NULL));
		con1=rand()%6+1;
		con2=rand()%6+1;
		con3=rand()%6+1;
		cout<<"\nxuc xac 1: "<<con1<<"\nxuc xac 2: "<<con2<<"\nxuc xac 3: "<<con3;
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
		cout<<"\nSo tien hien tai cua ban la: "<<cost<<"$"<<endl;
		cout<<"                            ---*--*--*---\n";
	}
	cout<<"\nTong so tien cua ban la: "<<cost<<"$";
	if(cost>(solandoan+2)){
		cout<<"\nCongratulations !!!\n";
		cout<<"                                _____\n";
		cout<<"                             \\ [_$.$_] /\n";
		cout<<"                                 |_|";
	}
	else{
		cout<<"\nGame over!!!\n";
		cout<<"                                _____\n";
		cout<<"                               [~>_<~]\n";
		cout<<"                                /|_|\\";
	}
}
