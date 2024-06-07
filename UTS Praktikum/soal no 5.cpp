#include <iostream>
using namespace std;
int main(){
	int pt,hrgtiket,jumtik,bt,total;
	cout<<"daftar kelas tiket kerata api hargany6a dibawah ini :\n";
	cout<<"1.Kelas ekonomi Rp.200.000 \n";
	cout<<"2.Kelas Bisnis Rp.300.000 \n";
	cout<<"3.Kelas Exsekutive Rp.500.000 \n";
	cout<<"Silahkan Pilih Tiket Yang Anda Sukai :\n";
	cin>>pt;
	switch (pt){
		case 1:
		cout<<"Kelas Ekonomi\n";
		hrgtiket=200000;	
		cout<<"masukan jumlah tiket yang ingin anda pesan :\n";
		cin>>jumtik;
		switch(jumtik){
			case 1:
				cout<<"satu\n";
				bt=1;
				break;
			case 2:
				cout<<"dua\n";
				bt=2;
				break;
			case 3:
				cout<<"tiga\n";
				bt=3;
				break;
				default:
				cout<<"jumlah tiket tidak ada\n";
		}
		break;		
		case 2:
		cout<<"Kelas bisnis\n";
		hrgtiket=300000;	
		cout<<"masukan jumlah tiket yang ingin anda pesan :\n";
		cin>>jumtik;
		switch(jumtik){
			case 1:
				cout<<"satu\n";
				bt=1;
				break;
			case 2:
				cout<<"dua\n";
				bt=2;
				break;
			case 3:
				cout<<"tiga\n";
				bt=3;
				break;
				default:
				cout<<"jumlah tiket tidak ada\n";
		}
		break;
	 	case 3:
		cout<<"Kelas exsekutive\n";
		hrgtiket=500000;	
		cout<<"masukan jumlah tiket yang ingin anda pesan :\n";
		cin>>jumtik;
		switch(jumtik){
			case 1:
				cout<<"satu\n";
				bt=1;
				break;
			case 2:
				cout<<"dua\n";
				bt=2;
				break;
			case 3:
				cout<<"tiga\n";
				bt=3;
				break;	
				default:
				cout<<"jumlah tiket tidak ada\n";						
		}
		break;
		default:
		cout<<"Pilihan Anda Salah\n";
		}
	total=hrgtiket*bt;
	cout<<"total yang harus anda bayar adalah :\n"<<total;	
}
